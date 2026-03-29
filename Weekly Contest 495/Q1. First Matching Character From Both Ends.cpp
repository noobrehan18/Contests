/*You are given a string s of length n consisting of lowercase English letters.

Return the smallest index i such that s[i] == s[n - i - 1].

If no such index exists, return -1.

 

Example 1:

Input: s = "abcacbd"

Output: 1*/

class Solution {
public:
    int firstMatchingIndex(string s) {
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==s[n-i-1]){
                return i;
            }
        }
        return -1;
        
    }
};


