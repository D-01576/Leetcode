class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int greater = *max_element(nums.begin(), nums.end());
        int ans = (k * (2 * greater + (k - 1))) / 2;
        return ans;
    }
};
