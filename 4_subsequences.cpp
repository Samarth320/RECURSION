#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void find_Subseq(int arr[] , int n , int i, vector<int>ans)
{
    if(i >= n) 
    {
        if(ans.size() == 0)
        {
            cout<<"{}"<<endl;
            return;
        }

        for(auto it:ans)
        cout<<it<<" ";

        cout<<endl;
        return;
    }

    ans.push_back(arr[i]);        //take
    find_Subseq(arr,n,i+1,ans);   // recursion call for take

    ans.pop_back();                 // not take
    find_Subseq(arr,n,i+1,ans);     // recursion call for not take

}



int main()
{
   int arr[] = {3,1,2};
   int n = 3;

   vector<int>ans;

   find_Subseq(arr,n,0,ans);

    return 0;
}