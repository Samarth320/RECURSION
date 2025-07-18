#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_Subseq(int arr[] , int n , int i,int k , int sum)
{
    if(i >= n)
    {
        if(sum == k) return 1;

        else return 0;
    }

    int left = find_Subseq(arr,n,i+1,k,sum + arr[i]);

    int right = find_Subseq(arr,n,i+1,k,sum);

    return left + right;
}



int main()
{
   int arr[] = {1,2,1};
   int n = 3;
   int k = 2;
   int sum = 0;

   cout<<"total count is "<<find_Subseq(arr,n,0,k,sum);

    return 0;
}