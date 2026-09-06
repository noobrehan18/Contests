/*You are given a string s of length n and an integer k.

A cyclic rotation of s is obtained by choosing a prefix of s whose length is between 0 and n - 1 (inclusive), and moving it to the end of the string while preserving the order of all characters.

For every cyclic rotation of s, let its score be the number of indices i such that 0 <= i < n - 1 and the characters at positions i and i + 1 are equal.

Return the number of cyclic rotations of s whose score equals k.

A prefix of a string is a substring that starts from the beginning of the string and extends to any point within it.

A substring is a contiguous sequence of characters within a string, which may be empty.

 

Example 1:

Input: s = "aab", k = 1

Output: 2*/
class Solution {
public:
    int countRotations(string s, int k) {
        int N=s.size();
        vector<int> ed(N);
        int b=0;
        for(int i=0;i<N;i++){
            ed[i]=(s[i]==s[(i+1) % N])?1:0;
            b+=ed[i];
        }
        int tr=b-k;
        if(tr!=0 && tr!=1){
            return 0;
        }
        int cnt=0;
        for(int i=0;i<N;i++){
            if(ed[i]==tr){
                cnt++;
            }
        }
        return cnt;
    }
};