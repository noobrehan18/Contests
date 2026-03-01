/*You are given a string s that consists of lowercase English letters.

Return the string obtained by removing all trailing vowels from s.

The vowels consist of the characters 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: s = "idea"

Output: "id"

Explanation:

Removing "idea", we obtain the string "id".*/

class Solution {
public:
    string trimTrailingVowels(string s) {
        int i=s.length()-1;
        while(i>=0 && (s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u')){
            i--;
        }
        return s.substr(0,i+1);
        
    }
};