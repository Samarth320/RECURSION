#include<iostream>
using namespace std;

void reverse(int arr[] , int n , int s,int e)
{
    if(s >= e)
    return;

    swap(arr[s],arr[e]);

    reverse(arr,n , s+1 , e-1);

}



int main()
{
   int arr[] = {4,5,8,2,9,34,7,23};

   cout<<"Before"<<endl;
   for(auto it:arr)
   {
    cout<<it<<" ";
   }
   cout<<endl;

   reverse(arr,8,0,7);

   cout<<"After"<<endl;
   for(auto it:arr)
   {
    cout<<it<<" ";
   }
   cout<<endl;


    return 0;
}