class Solution {
public:
    void solve(vector<int> nums , int i, int czor,int mx,int &ans){
        if(czor == mx){
            ans++;
        }
        for(int j = i; j < nums.size();j++){
            solve(nums,j+1,czor | nums[j],mx,ans);
        }
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int mx = 0;
        for(int n : nums){
            mx |= n;
        }
        int ans = 0;
        solve(nums, 0,0,mx,ans);
        return ans;
    }
};