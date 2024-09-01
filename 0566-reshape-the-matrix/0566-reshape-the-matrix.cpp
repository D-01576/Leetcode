class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       vector<vector<int>> ans(r, vector<int>(c));  
        int now = 0;
        
        if (mat.size()*mat[0].size() != r * c) {
            return mat; 
        }
        int tempr = 0;
        int tempc = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                ans[tempr][tempc] = mat[i][j];
                tempc++;
                if(tempc == c){
                    tempr++;
                    tempc = 0;
                }
            }
        }
        
        return ans;
    }
};