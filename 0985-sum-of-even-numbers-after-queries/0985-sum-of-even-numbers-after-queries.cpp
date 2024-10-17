class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int tAdd = 0;

        for (int n : nums) {
            if ((n & 1) == 0) {
                tAdd += n;
            }
        }

        for (const auto& qu : queries) {
            int index = qu[1];
            int valueToAdd = qu[0];
            int before = nums[index];

            nums[index] += valueToAdd;
            int after = nums[index];

            if ((before & 1) == 0) {
                tAdd -= before;
            }
            if ((after & 1) == 0) {
                tAdd += after;
            }

            ans.push_back(tAdd);
        }

        return ans;
    }
};
