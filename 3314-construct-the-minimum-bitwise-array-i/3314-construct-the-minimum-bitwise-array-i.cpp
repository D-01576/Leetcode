class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        
        for(int n : nums){
            bool no = true;
            for(int i = 0; i <= n;i++){
                if((i | (i+1)) == n){
                    ans.push_back(i);
                    no = false;
                    break;
                }
            }
            if(no){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};