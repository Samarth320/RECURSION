#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// METHOD 1 --> NOT RECOMMENDED

// bool flag = false;

// void find_Subseq(int arr[] , int n , int i, vector<int>ans,int k , int sum)
// {
//     if(i >= n && flag == false)
//     {
//         if(sum == k)
//         {
//             for(auto it:ans)
//             cout<<it<<" ";

//             cout<<endl;

//             flag = true;
//         }
//         return;
//     }

//     ans.push_back(arr[i]);
//     find_Subseq(arr,n,i+1,ans,k,sum + arr[i]);

//     ans.pop_back();
//     find_Subseq(arr,n,i+1,ans,k,sum);
// }



// METHOD 2 --> GOOD PRACTICE

// Note - we have to terminate all the recursion calls once we get the first subsequence

// 1. Make the function bool
// 2. if the base case is "true" return true , else return false
// 3. add recursive call in "if" condition and if it is true then return true
// 4. at last if no recursive call comes out to be true , then function ends with return false

bool find_Subseq(int arr[] , int n , int i, vector<int>ans,int k , int sum)
{
    if(i >= n)
    {
        if(sum == k)
        {
            for(auto it:ans)
            cout<<it<<" ";

            cout<<endl;

            return true;
        }
        return false;
    }

    ans.push_back(arr[i]);
    if( find_Subseq(arr,n,i+1,ans,k,sum + arr[i]) == true ) return true;    //this means that if we are getting the subsequence in left side (take) then directly return true , no need to make the recursive call for right side (not take)

    ans.pop_back();
    if( find_Subseq(arr,n,i+1,ans,k,sum) == true ) return true;


    return false;
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