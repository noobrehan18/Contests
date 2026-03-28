/*You are given an integer array nums consisting only of 0, 1, and 2.

A pair of indices (i, j) is called valid if nums[i] == 1 and nums[j] == 2.

Return the minimum absolute difference between i and j among all valid pairs. If no valid pair exists, return -1.

The absolute difference between indices i and j is defined as abs(i - j).

 

Example 1:

Input: nums = [1,0,0,2,0,1]

Output: 2*/

//brute force approach


class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        vector<int>ones,twos;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1)ones.push_back(i);
            else if(nums[i]==2)twos.push_back(i);
        }
        int sol=INT_MAX;
        for(int i:ones){
            for(int j:twos){
                sol=min(sol,abs(i-j));
            }
        }
        return (sol==INT_MAX) ? -1:sol;
        
        
    }
};