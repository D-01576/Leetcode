class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int last = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == last + 1) {
                sum += nums[i];
                last = nums[i];
            } else {
                break;
            }
        }
        int x = sum;
        while (true) {
            if (find(nums.begin(), nums.end(), x) == nums.end()) {
                return x;
            }
            x++;
        }
    }
};
