/*ou are given an integer n and a digit x.

A number is considered valid if:

It contains at least one occurrence of digit x, and
It does not start with digit x.
Return true if n is valid, otherwise return false.

 

Example 1:

Input: n = 101, x = 0

Output: true */

class Solution {
public:
    bool validDigit(int n, int x) {
        int org=n;
        bool found=false;
        while(n>0){
            if(n%10==x){
                found=true;
                
            }
            n/=10;
        }
        if(!found)return false;
        while(org>=10){
            org/=10;
        }
        if(org==x)return false;
        return true;
    }
};
