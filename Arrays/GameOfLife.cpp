#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isValid(int r, int c, int n, int m) {
        return r >= 0 && c >= 0 && r < n && c < m;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> original = board;  
        int dr[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
        int dc[8] = {0, 1, 1, 1, 0, -1, -1, -1};

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int live = 0;
                for (int k = 0; k < 8; ++k) {
                    int r = dr[k] + i;
                    int c = dc[k] + j;
                    if (isValid(r, c, n, m) && original[r][c] == 1) {
                        live++;
                    }
                }
                if (original[i][j] == 1) {
                    if (live < 2 || live > 3) {
                        board[i][j] = 0;
                    }
                } else {
                    if (live == 3) {
                        board[i][j] = 1;
                    }
                }
            }
        }
    }
};
