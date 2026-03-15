/*You are given an integer n.

Return the total number of commas used when writing all integers from [1, n] (inclusive) in standard number formatting.

In standard formatting:

A comma is inserted after every three digits from the right.
Numbers with fewer than 4 digits contain no commas.
 

Example 1:

Input: n = 1002

Output: 3*/

class Solution {
public:
    int countCommas(int n) {
        long long sol=0;
        long long st=1000;
        int commas=1;
        while(st<=n){
            long long end=st*1000-1;
            long long cnt=min((long long)n,end)-st+1;
            sol+=cnt;
            st*=1000;
            commas++;
        }
        return sol; 
    }
};