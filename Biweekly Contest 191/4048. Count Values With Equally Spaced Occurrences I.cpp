/*You are given an integer array nums.

An integer x is called special if:

x appears exactly three times in nums.
All three occurrences of x are equally spaced in nums. In other words, if all occurrences of x are at indices i1 < i2 < i3, then i2 - i1 = i3 - i2.
Return the number of distinct special integers in nums.

 

Example 1:

Input: nums = [1,8,1,5,1,5,8,5]

Output: 2

 */

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>posi;
        int n=nums.size();
        for(int i=0;i<n;i++){
            posi[nums[i]].push_back(i);
        }
        int cnt=0;
        for(auto & [value,ind]:posi){
            if(ind.size()==3 && (ind[1]-ind[0]==ind[2]-ind[1])){
                cnt++;
            }
        }
        return cnt;
    }
};