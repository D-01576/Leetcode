class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ans = 0;
        int Ry = 0, Rx = 0;
        
        for (int i = 0; i < board.size(); i++) {
            bool found = false;
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == 'R') {
                    Ry = i;
                    Rx = j;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        
        for (int i = Rx + 1; i < board[Ry].size(); i++) {
            if (board[Ry][i] == 'B') break;
            if (board[Ry][i] == 'p') {
                ans++;
                break;
            }
        }
        
        for (int i = Rx - 1; i >= 0; i--) {
            if (board[Ry][i] == 'B') break;
            if (board[Ry][i] == 'p') {
                ans++;
                break;
            }
        }
        
        for (int i = Ry + 1; i < board.size(); i++) {
            if (board[i][Rx] == 'B') break;
            if (board[i][Rx] == 'p') {
                ans++;
                break;
            }
        }
        
        for (int i = Ry - 1; i >= 0; i--) {
            if (board[i][Rx] == 'B') break;
            if (board[i][Rx] == 'p') {
                ans++;
                break;
            }
        }
        
        return ans;
    }
};
