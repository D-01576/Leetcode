class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int rows = grid.size();
        if (rows == 0) return true;  // An empty grid satisfies the condition
        int cols = grid[0].size();
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                // Check the cell below if it exists
                if (i < rows - 1) {
                    if (grid[i][j] != grid[i + 1][j]) {
                        return false;
                    }
                }
                // Check the cell to the right if it exists
                if (j < cols - 1) {
                    if (grid[i][j] == grid[i][j + 1]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
