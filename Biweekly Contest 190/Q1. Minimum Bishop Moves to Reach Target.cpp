/*There is an 8 x 8 empty chessboard with 1-indexed rows and columns.

You are given an array source = [sr, sc] representing the starting position of a bishop, and an array target = [tr, tc]. In one move, the bishop travels any number of squares along a single diagonal direction, staying within the board.

Return the minimum number of moves for the bishop to land exactly on target. If it can never reach target, return -1.

 

Example 1:

Input: source = [8,1], target = [1,8]

Output: 1

Note: Please do not copy the description during the contest to maintain the integrity of your submissions.M*/

class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int src=source[0], scc=source[1];
        int trg=target[0],tct=target[1];

        if((src+scc)% 2 != (trg+tct)%2)return -1;
        if(src-scc==trg-tct || src+scc==trg+tct)return 1;
        return 2;
    }
};