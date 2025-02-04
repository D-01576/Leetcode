class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = 0;
        int currentsum = nums[0];
        for(int i = 0;i < nums.size()-1;i++){
            if(nums[i] < nums[i+1]){
                currentsum += nums[i+1];
            }else{
                ans = max(ans, currentsum);
                currentsum = nums[i+1];
            }
        }
        ans = max(ans, currentsum);
        return ans;
    }
};