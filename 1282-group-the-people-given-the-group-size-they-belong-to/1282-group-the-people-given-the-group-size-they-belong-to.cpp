class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        vector<pair<int,int>> nums;

        for (int i = 0; i < groupSizes.size(); i++) {
            nums.push_back({groupSizes[i], i});
        }

        sort(nums.begin(), nums.end());

        int current = nums[0].first;
        int index = 0;

        ans.push_back(vector<int>());
        int count = 0;

        for (const auto& num : nums) {
            if (current == num.first) {
                if (count == current) {
                    count = 0;
                    index++;
                    ans.push_back(vector<int>());
                }
                ans[index].push_back(num.second);
                count++;
            } else {
                current = num.first;
                count = 1;
                index++;
                ans.push_back(vector<int>());
                ans[index].push_back(num.second);
            }
        }
        return ans;
    }
};
