/*ou are given two integers n and k.

A positive integer x is called compatible if it satisfies both of the following conditions:

abs(n - x) <= k
(n & x) == 0
Return the sum of all compatible integers x.

Note:

Here, & denotes the bitwise AND operator.
The absolute difference between integers i and j is defined as abs(i - j).
 

Example 1:

Input: n = 2, k = 3

Output: 10 */

class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sol=0;
        for(int x=max(1,n-k);x<=n+k;x++){
            if((n & x) ==0){
                sol+=x;
            }
        }
        return sol;
    }
};
