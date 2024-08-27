class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        bool found = false;
        int times = 0;
        for(int  i = 0 ; i < nums.size();i++){
            if(found){
                if(nums[i] == 0){
                    times++;
                }else{
                    if(times < k) return false;
                    times = 0;
                    found = true;
                }
            }else{
                if(nums[i] == 1){
                    found = true;
                }
            }
        }
        return true;
    }
};