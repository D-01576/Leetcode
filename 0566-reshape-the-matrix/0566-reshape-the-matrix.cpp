class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int oldRows = mat.size();
        int oldCols = mat[0].size();
        if (oldRows * oldCols != r * c) {
            return mat; 
        }
        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < oldRows; i++) {
            for (int j = 0; j < oldCols; j++) {
                int flatIndex = i * oldCols + j;
                int newRow = flatIndex / c;
                int newCol = flatIndex % c;
                ans[newRow][newCol] = mat[i][j];
            }
        }
        return ans;
    }
};
