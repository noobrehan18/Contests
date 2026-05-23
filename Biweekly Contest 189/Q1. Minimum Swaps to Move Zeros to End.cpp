/*You are given an integer array nums.

In one operation, you can choose any two distinct indices i and j and swap nums[i] and nums[j].

Return an integer denoting the minimum number of operations required to move all 0s to the end of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]

Output: 2©leetcode */
class Solution {
    public:
        int minimumSwaps(vector<int>& nums) {
            int n=nums.size();
            int nonZero=0;
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    nonZero++;
                }
            }
            int swp=0;
            for(int i=0;i<nonZero;i++){
                if(nums[i]==0){
                    swp++;
                }
            }
            return swp;
        }
    };©leetcode