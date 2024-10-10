#define pu push_back

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<int> mem(n);
        
        mem[n-1] = nums[n-1];
        for (int i = n - 2; i >= 0; i--) {
            mem[i] = max(mem[i+1], nums[i]);
        }
        
        int l = 0 ,r = 1;
        while(r < n){
            if(nums[l] > nums[r]){
                if(nums[l] > mem[r]){
                    l++;
                }
            }else {
                ans = max(r - l, ans);
            }
            r++;
        }
        return ans;
    }
};