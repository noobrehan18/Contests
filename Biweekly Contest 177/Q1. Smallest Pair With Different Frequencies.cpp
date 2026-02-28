/*You are given an integer array nums.

Consider all pairs of distinct values x and y from nums such that:

x < y
x and y have different frequencies in nums.
Among all such pairs:

Choose the pair with the smallest possible value of x.
If multiple pairs have the same x, choose the one with the smallest possible value of y.
Return an integer array [x, y]. If no valid pair exists, return [-1, -1].

The frequency of a value x is the number of times it occurs in the array.

 

Example 1:

Input: nums = [1,1,2,2,3,4]

Output: [1,3]*/

class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>val;
        vector<int>freq;
        int n=nums.size();
        for(int i=0;i<n;){
            int cur=nums[i];
            int cnt=0;
            while(i<n && nums[i]==cur){
                cnt++;
                i++;
            }
            val.push_back(cur);
            freq.push_back(cnt);
        }
        int m=val.size();
        if(m<2){
            return {-1,-1};
        }
        int x=val[0];
        for(int i=0;i<m;i++){
            if(freq[i]!=freq[0]){
                return {x,val[i]};
            }
        }
        return{-1,-1};
    }
}
