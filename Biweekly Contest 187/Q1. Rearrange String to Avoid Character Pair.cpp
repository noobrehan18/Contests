/*You are given a string s and two distinct lowercase English letters x and y.

Rearrange the characters of s to construct a new string t such that:

t is a permutation of s.
Every occurrence of y appears before every occurrence of x in t.
Return any valid string t.

A permutation is a rearrangement of all the characters of a string.

 

Example 1:

Input: s = "aabc", x = "a", y = "c"

Output: "cbaa"*/

class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n=s.size();
        vector<int>cnt(26,0);
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
        }
        string sol;
        sol.append(cnt[y-'a'],y);
        for(char c='a';c<='z';c++){
            if(c==x || c==y)continue;
            sol.append(cnt [c-'a'],c);
        }
        sol.append(cnt[x-'a'],x);
        return sol;
    }
};
