class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int current = 0;
        for(int num : nums){
            if(current < 0){
                current = 0;
            }
            current += num;
            ans = max(ans,current);
        }
        return ans;
    }
};