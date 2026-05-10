/*You are given an integer array nums of length n.

Construct a new array ans of length 2 * n such that the first n elements are the same as nums, and the next n elements are the elements of nums in reverse order.

Formally, for 0 <= i <= n - 1:

ans[i] = nums[i]
ans[i + n] = nums[n - i - 1]
Return an integer array ans.

 

Example 1:

Input: nums = [1,2,3]

Output: [1,2,3,3,2,1]
*/
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>sol;
        for(int i=0;i<n;i++){
            sol.push_back(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            sol.push_back(nums[i]);
            
        }
        return sol;
        
    }
};
