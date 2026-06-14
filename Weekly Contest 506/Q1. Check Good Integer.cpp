/*You are given a positive integer n.

Let digitSum be the sum of the digits of n, and let squareSum be the sum of the squares of the digits of n.

An integer is called good if squareSum - digitSum >= 50.

Return true if n is good. Otherwise, return false.

 

Example 1:

Input: n = 1000

Output: false*/

class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum=0;
        int sqSum=0;
        while(n>0){
            int digit=n%10;
            digitSum+=digit;
            sqSum+=digit*digit;
            n/=10;
        }
        return (sqSum-digitSum)>=50;

};
