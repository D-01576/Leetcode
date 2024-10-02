class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.empty()) return {};  
        
        vector<int> temp = arr;
        vector<int> ans(arr.size(), 0);
        sort(temp.begin(), temp.end());
        
        unordered_map<int, int> rank_map;
        int rank = 1;

        for (int num : temp) {
            if (rank_map.find(num) == rank_map.end()) {
                rank_map[num] = rank++;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            ans[i] = rank_map[arr[i]];
        }

        return ans;
    }
};
