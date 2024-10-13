class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<int> ans(2,0);
        int mnans  = INT_MAX;
        
        while(true){
            int index = 0;
            int mn = INT_MAX;
            int mx = INT_MIN;
            for(int i = 0 ; i < nums.size();i++){
                if(nums[i][0] <= mn){
                    mn = nums[i][0];
                    index = i;
                }
                if(nums[i][0] >= mx){
                    mx = nums[i][0];
                }
            }
            if(mx-mn < mnans){
                ans[0] = mn;
                ans[1] = mx;
                mnans = mx-mn;
            }
            nums[index].erase(nums[index].begin()+0);
            if(nums[index].empty()){
                break;
            }
        }
        return ans;
    }
};