class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 0; i < k;i++){
            int index = min_element(nums.begin(),nums.end()) - nums.begin();
            nums[index] *= multiplier;
        }
        return nums;
    }
};