/*You are given an integer array nums.

Return an integer denoting the first even integer (earliest by array index) that appears exactly once in nums. If no such integer exists, return -1.

An integer x is considered even if it is divisible by 2.

 

Example 1:

Input: nums = [3,4,2,5,4,6]

Output: 2*/

//brute force. //Time complexity: O(n^2) and space complexity: O(1). 
class Solution { 
public:
    int firstUniqueEven(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                int cnt=0;
                for(int j=0;j<n;j++){
                    if(nums[i]==nums[j]){
                        cnt++;
                    }
                }
                if(nums[i]==1){
                    return nums[i];
                }
            } 
        }
        return -1;
    }
};


//using hash map. //Time complexity: O(n) and space complexity: O(n). 
//optimized solution.

class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2==0 && freq[nums[i]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};