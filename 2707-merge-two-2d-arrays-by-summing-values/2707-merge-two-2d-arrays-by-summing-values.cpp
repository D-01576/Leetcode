class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int, int> tobesorted;

        for(int i = 0; i < nums1.size();i++){
            tobesorted[nums1[i][0]] += nums1[i][1];
        }
        
        for(int i = 0; i < nums2.size();i++){
            tobesorted[nums2[i][0]] += nums2[i][1];
        }


        vector<pair<int, int>> sortedVec(tobesorted.begin(), tobesorted.end());

        sort(sortedVec.begin(), sortedVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });


        vector<vector<int>> ans;

        for(const auto ff: sortedVec){
            ans.push_back({ff.first,ff.second});
        }
        return ans;

    }
};