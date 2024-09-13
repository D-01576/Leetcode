class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> prefix(arr.size());
        prefix[0] = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            prefix[i] = prefix[i - 1] ^ arr[i];
        }
    
        vector<int> result;
        for (int i = 0; i < queries.size(); i++) {
            int start = queries[i][0];
            int end = queries[i][1];
            
            if (start == 0) {
                result.push_back(prefix[end]);
            } else {
                result.push_back(prefix[end] ^ prefix[start - 1]);
            }
        }
        
        return result;
    }
};
