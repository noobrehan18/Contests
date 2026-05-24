/*You are given a sorted integer array nums and an integer k.

Return an array such that each distinct element appears at most k times, while preserving the relative order of the elements in nums.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2

Output: [1,1,2,2,3]
*/

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int num=nums[i];
            if(ans.size()<k || ans[ans.size()-k] != num){
                ans.push_back(num);
            }
        }
        return ans;
    }
};
