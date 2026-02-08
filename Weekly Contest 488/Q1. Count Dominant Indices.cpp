/*ou are given an integer array nums of length n.

An element at index i is called dominant if: nums[i] > average(nums[i + 1], nums[i + 2], ..., nums[n - 1])

Your task is to count the number of indices i that are dominant.

The average of a set of numbers is the value obtained by adding all the numbers together and dividing the sum by the total number of numbers.

Note: The rightmost element of any array is not dominant.

 

Example 1:

Input: nums = [5,4,3]

Output: 2

©leetcode*/

class Solution {
public:
    int dominantIndices(vector<int>& nums) {
    int n=nums.size();
    int cnt=0;
    for(int i=0;i<n-1;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum+=nums[j];
        }
        double avg=double(sum)/(n-i-1);
        if(nums[i]>avg){
            cnt++;
        }
    }
    
    return cnt;
    }
};