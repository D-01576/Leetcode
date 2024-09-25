class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int num = 0;
        for(const auto& n : nums){
            if(n > num){
                num = n;
            }
        }
        int ans = 0;
        for(int i = 0 ; i < k;i++){
            ans += num;
            num++;
        }
        return ans;
    }
};