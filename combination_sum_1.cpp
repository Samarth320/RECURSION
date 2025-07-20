// Given an array of distinct integers candidates and a target integer target, 
// return a list of all unique combinations of candidates where the chosen numbers sum to target. 
// You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. 
// Two combinations are unique if the frequency of at least one of the chosen numbers is different.

// Example 1:

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.

// refer leet code question 39

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    void find_Comb(int i , vector<int>& candidates, int target ,vector<int>temp, vector<vector<int>>&ans)
    {

        if(i == candidates.size())
        {
            if(target == 0)
            {
                ans.push_back(temp);
                return;
            }

            else
            return;
        }

        if(candidates[i] <= target)
        {
            temp.push_back(candidates[i]);
            find_Comb(i,candidates,target-candidates[i],temp,ans);
            temp.pop_back();
        }

        find_Comb(i+1,candidates,target,temp,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;

        vector<int>temp;

        find_Comb(0,candidates,target,temp,ans);

        return ans;
    }
};

int main()
{
    vector<int>candidates = {2,3,6,7};
    int target = 7;


    Solution ss;
    vector<vector<int>>ans = ss.combinationSum(candidates,target);

    for(auto it:ans)
    {
        for(auto temp:it)
        cout<<temp<<" ";

        cout<<endl;
    }



    return 0;
}
