/*You are given an integer n, a 2D integer array grid of size n x n, and two integer arrays rowShift and colShift, each of length n where:

rowShift[i] represents the number of positions to cyclically left shift the ith row of grid.
colShift[j] represents the number of positions to cyclically upward shift the jth column of grid.
First, cyclically shift each row according to rowShift, then cyclically shift each column according to colShift.

Return the resulting grid after performing all the shifts.

A cyclic left shift of the ith row by k positions shifts only that row. The element at column j moves to column (j - k + n) % n, while all other rows remain unchanged.

A cyclic upward shift of the jth column by k positions shifts only that column. The element at row i moves to row (i - k + n) % n, while all other columns remain unchanged.

 

Example 1:

Input: n = 2, grid = [[1,2],[3,4]], rowShift = [1,0], colShift = [0,1]

Output: [[2,4],[3,1]]*/

class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>result(n,vector<int>(n));
        for(int i=0;i<n;i++){
            int s=rowShift[i]%n;
            for(int j=0;j<n;j++){
                result[i][j]=grid[i][(j+s)%n];
            }
        }
        vector<vector<int>>fin(n,vector<int>(n));
        for(int j=0;j<n;j++){
            int k=colShift[j]%n;
            for(int i=0;i<n;i++){
                fin[i][j]=result[(i+k)%n][j];
            }
        }
        return fin;
    }
};