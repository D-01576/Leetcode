class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        int n = nums.size();
        int full = nums[0];
        for(int i = 1; i < n;i++){
            full = full ^ nums[i];
        }
        int maxXorValue = (1 << maximumBit) - 1;
        for(int i = n-1 ; i >= 0;i--){
            int x = full ^ maxXorValue;
            ans.push_back(x);
            full = full ^ nums[i];
        }
        return ans;
    }
};