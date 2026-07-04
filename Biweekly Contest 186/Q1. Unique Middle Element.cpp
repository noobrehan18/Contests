/*You are given an integer array nums of odd length n.

Return true if the middle element of nums appears exactly once in the array. Otherwise return false.

 

Example 1:

Input: nums = [1,2,3]

Output: true

Note: Please do not copy the description during the contest to maintain the integrity of your submissions. 
*/

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int mid=nums[n/2];
        for(int i=0 ;i<n;i++){
            if(nums[i]==mid){
                cnt++;
            }
        }
        return cnt==1;
        
    }
};
