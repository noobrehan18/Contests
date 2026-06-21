/*You are given a string moves consisting of the characters 'U', 'D', 'L', 'R', and '_'.

Starting from the origin (0, 0), each character represents one move on a 2D plane:

'U': Move up by 1 unit.
'D': Move down by 1 unit.
'L': Move left by 1 unit.
'R': Move right by 1 unit.
'_': Can be independently replaced with any one of 'U', 'D', 'L', or 'R'.
Return the maximum Manhattan distance from the origin that can be achieved after all moves have been performed.

The Manhattan distance between two points (x1, y1) and (x2, y2) is |x1 - x2| + |y1 - y2|.

 

Example 1:

Input: moves = "L_D_"

Output: 4*/

class Solution {
public:
    int maxDistance(string moves) {
        int U=0;
        int D=0;
        int L=0;
        int R=0;
        int wild=0;
        int n=moves.size();
        for(int i=0;i<n;i++){
            if (moves[i]=='U') U++;
            else if(moves[i]=='D') D++;
            else if(moves[i]=='L') L++;
            else if (moves[i]=='R') R++;
            else wild++;
        }
        int x=R-L;
        int y=U-D;
        return abs(x)+abs(y)+wild;
    }
};
