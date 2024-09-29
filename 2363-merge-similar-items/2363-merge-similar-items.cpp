class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, int> item2;

        for (const auto& item : items1) {
            item2[item[0]] += item[1]; 
        }
        
        for (const auto& item : items2) {
            item2[item[0]] += item[1]; 
        }
        
        vector<vector<int>> ans;

        for (const auto& item : item2) {
            ans.push_back({item.first, item.second});
        }
        
        sort(ans.begin(), ans.end()); 
        
        return ans;
    }
};
