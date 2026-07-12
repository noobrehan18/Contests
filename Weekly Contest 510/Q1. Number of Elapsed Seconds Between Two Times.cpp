/*You are given two valid times startTime and endTime, each represented as a string in the format "HH:MM:SS".

Return the number of seconds that have elapsed from startTime to endTime, inclusive of both endpoints.

 

Example 1:

Input: startTime = "01:00:00", endTime = "01:00:25"

Output: 25
*/

class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        auto tosec=[](string t){
            int h=stoi(t.substr(0,2));
            int m=stoi(t.substr(3,2));
            int s =stoi(t.substr(6,2));
            return h*3600+m*60+s;
        };
        return tosec(endTime)-tosec(startTime);
        
    }
};