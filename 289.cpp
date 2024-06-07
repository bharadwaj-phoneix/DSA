class Solution {
public:
    const int directions[8][2] = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1},
                                  {-1, 0},  {0, -1}, {1, 0},  {0, 1}};

    int countLiveNeighbours(const vector<vector<int>> board, int r, int c,
                            int m, int n) {
        int count = 0;
        for (auto dir : directions) {
            int nr = r + dir[0];
            int nc = c + dir[1];
            if (nr >= 0 && nc >= 0 && nr < m && nc < n && (board[nr][nc] == 1 || board[nr][nc] == 2)) {
                    count++;
            }
        }
        return count;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                int temp = countLiveNeighbours(board, r, c, m, n);
                if (board[r][c] == 1 && (temp < 2 || temp > 3)) {
                    board[r][c] = 2;
                }
                if (board[r][c] == 0 && temp == 3) {
                        board[r][c] = 3;
                }
            }
        }

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (board[r][c] == 2) {
                    board[r][c] = 0;
                }
                if (board[r][c] == 3) {
                    board[r][c] = 1;
                }
            }
        }
    }
};
