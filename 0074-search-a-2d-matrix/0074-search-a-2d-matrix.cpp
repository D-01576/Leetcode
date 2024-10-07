class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(),m = matrix[0].size();
        int start = 0;
        int end = n*m-1;
        int mid=start+(end-start)/2;
        while(start <= end){
            int temp = matrix[mid/m][mid%m];
            if(temp > target){
                end = mid-1;
            }else if(temp < target){
                start = mid+1;
            }else {
                return true;
            }
            mid = start+(end-start)/2;
        }
        return false;
    }
};