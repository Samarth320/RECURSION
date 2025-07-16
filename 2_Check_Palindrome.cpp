#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str , int n, int s,int e){

    if(s > e) return true;

    if(str[s] != str[e]) return false;

    return isPalindrome(str,n,s+1,e-1);

}



int main()
{
    string str = "noon";

    int n = str.length();

    isPalindrome(str , n , 0 , n-1) ? cout<<"given string is palindrome" : cout<<"given string is not palindrome";

    return 0;
}