/*You are given an integer array nums.

An element nums[i] is considered valid if it satisfies at least one of the following conditions:

It is strictly greater than every element to its left.
It is strictly greater than every element to its right.
The first and last elements are always valid.

Return an array of all valid elements in the same order as they appear in nums.

 

Example 1:

Input: nums = [1,2,4,2,3,2]

Output: [1,2,4,3,2]

©*/

class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        if(n==0)return res;
        vector<int>leftmx(n),rightmx(n);

        leftmx[0]=INT_MIN;
        for(int i=1;i<n;i++){
            leftmx[i]=max(leftmx[i-1],nums[i-1]);
        }
        rightmx[n-1]=INT_MIN;
        for(int i=n-2;i>=0;i--){
            rightmx[i]=max(rightmx[i+1],nums[i+1]);
        }
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1 || nums[i]>leftmx[i] || nums[i]>rightmx[i]){
                res.push_back(nums[i]);
            }
        }
        return res;
        
    }
};
