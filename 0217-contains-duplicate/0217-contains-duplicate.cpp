class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> jj(nums.begin(), nums.end());
        return nums.size() != jj.size();
    }
};