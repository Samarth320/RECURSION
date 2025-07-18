#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void find_Subseq(int arr[] , int n , int i, vector<int>ans,int k , int sum)
{
    if(i >= n)
    {
        if(sum == k)
        {
            for(auto it:ans)
            cout<<it<<" ";

            cout<<endl;
        }
        return;
    }

    ans.push_back(arr[i]);
    find_Subseq(arr,n,i+1,ans,k,sum + arr[i]);

    ans.pop_back();
    find_Subseq(arr,n,i+1,ans,k,sum);
}



int main()
{
   int arr[] = {1,2,1};
   int n = 3;
   int k = 2;
   int sum = 0;

   vector<int>ans;

   find_Subseq(arr,n,0,ans,k,sum);

    return 0;
}