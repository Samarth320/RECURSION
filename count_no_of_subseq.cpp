#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_Subseq(int arr[] , int n , int i, vector<int>ans,int k , int sum)
{
    if(i >= n)
    {
        if(sum == k) return 1;

        else return 0;
    }

    ans.push_back(arr[i]);
    int left = find_Subseq(arr,n,i+1,ans,k,sum + arr[i]);

    ans.pop_back();
    int right = find_Subseq(arr,n,i+1,ans,k,sum);

    return left + right;
}



int main()
{
   int arr[] = {1,2,1};
   int n = 3;
   int k = 2;
   int sum = 0;

   vector<int>ans;

   cout<<"total count is "<<find_Subseq(arr,n,0,ans,k,sum);

    return 0;
}