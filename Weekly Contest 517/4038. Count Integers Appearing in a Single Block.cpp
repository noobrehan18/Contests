/*You are given an integer array nums.

An integer x is special if all occurrences of x in nums appear in a single contiguous block.

Return the number of distinct special integers in nums.

 

Example 1:

Input: nums = [1,2,2,1]

Output: 1*/

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>fr,ls,cnt;
        for(int i=0;i<n;i++){
            if(fr.find(nums[i])==fr.end()){
                fr[nums[i]]=i;
            }
            ls[nums[i]]=i;
            cnt[nums[i]]++;
        }
        int sol=0;
        for(auto& [value,count]:cnt){
            if(ls[value]-fr[value]+1 == count){
                sol++;
            }
        }
        return sol;
    }
};