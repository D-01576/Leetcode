class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i = 0 ; i < nums.size();i++){
            int target = -nums[i];
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                int sum  = nums[left] + nums[right];
                if(sum == target){
                    ans.insert({-target,nums[left],nums[right]});
                    left++;
                    right--;
                }else if(sum < target){
                    left++;
                }else{
                    right--;
                }
            }
        }
        vector<vector<int>> anss(ans.begin(),ans.end());
        return anss;
    }
};