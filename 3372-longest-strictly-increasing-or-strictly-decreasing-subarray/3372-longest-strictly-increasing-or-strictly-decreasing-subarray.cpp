class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int highin = 1, highdc = 1;
        int c1 = 1, c2 = 1;
        int si = nums.size()-1;
        for(int i = 0; i < si;i++){
            if(nums[i] < nums[i+1]){
                c1++;
            }else{
                highin = max(highin, c1);
                c1 = 1;
            }

            if(nums[si-i] < nums[si-i-1]){
                c2++;
            }else{
                highdc = max(highdc, c2);
                c2 = 1;
            }
        }
        highdc = max(highdc, c2);
        highin = max(highin, c1);
        return max(highin,highdc);
    }
};