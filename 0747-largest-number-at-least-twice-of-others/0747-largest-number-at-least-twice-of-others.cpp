class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int i = max_element(nums.begin(),nums.end()) - nums.begin();
        sort(nums.begin(),nums.end());
        if(2*nums[nums.size()-2] <= nums[nums.size()-1]) return i;
        return -1;
    }
};