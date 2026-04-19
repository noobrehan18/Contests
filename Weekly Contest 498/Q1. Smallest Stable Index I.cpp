/*You are given an integer array nums of length n and an integer k.

For each index i, define its instability score as max(nums[0..i]) - min(nums[i..n - 1]).

In other words:

max(nums[0..i]) is the largest value among the elements from index 0 to index i.
min(nums[i..n - 1]) is the smallest value among the elements from index i to index n - 1.
An index i is called stable if its instability score is less than or equal to k.

Return the smallest stable index. If no such index exists, return -1.

 

Example 1:

Input: nums = [5,0,1,4], k = 3

Output: 3*/

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(nums.empty())return -1;
        if(n==1)return 0;
        
        vector<int>suffixmin(n);
        suffixmin[n-1]=nums[n-1];
        for(int i=n-1;i-->0;){
            suffixmin[i]=min(nums[i],suffixmin[i+1]);    
        }
        int prefixmx=nums[0];
        for(int i=0;i<n;i++){
            prefixmx=max(nums[i],prefixmx);
            if((long long)prefixmx-suffixmin[i]<=k){
                return i;
            }
        }
        return -1;        
    }
};
