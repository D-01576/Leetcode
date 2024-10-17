class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int tAdd = 0;
        for(int n : nums){
            if(n % 2 == 0){
                tAdd += n;
            }
        }
        for(const auto& qu : queries){
            int before = nums[qu[1]];
            int sum = before + qu[0];
            nums[qu[1]] = sum;
            int after = nums[qu[1]];
            if(before % 2 == 0){
                tAdd -= before;
            }
            if(after % 2 == 0){
                tAdd += after;
            }
            
            ans.push_back(tAdd);
        }
        return ans;
    }
};