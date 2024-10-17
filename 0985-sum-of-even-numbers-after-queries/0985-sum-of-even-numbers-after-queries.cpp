class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        for(const auto& qu : queries){
            nums[qu[1]] = nums[qu[1]] + qu[0];
            int tAdd = 0;
            for(int n : nums){
                if(n % 2 == 0){
                    tAdd += n;
                }
            }
            ans.push_back(tAdd);
        }
        return ans;
    }
};