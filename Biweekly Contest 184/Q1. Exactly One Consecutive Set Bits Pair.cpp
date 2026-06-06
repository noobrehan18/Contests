/*You are given an integer n.

Return true if its binary representation contains exactly one pair of consecutive set bits, and false otherwise.

The set bits in an integer are the 1's present when it is written in binary.
 

Example 1:

Input: nums = 6

Output: true©*/

class Solution {
public:
    bool consecutiveSetBits(int n) {
        int cnt=0;
        while(n>0){
            if((n & 3) ==3){
                cnt++;
            }
            n>>=1;
        }
        return cnt==1;
        
    }
};

