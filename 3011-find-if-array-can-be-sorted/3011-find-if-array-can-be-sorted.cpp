class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()-1){
            if(nums[i] > nums[i+1]){
                if(Bit(nums[i]) != Bit(nums[i+1])){
                    return false;
                }
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
                if(i > 0){
                    i--;
                }
            }else{
                i++;
            }
        }
        return true;
    }
    int Bit(int n) {
        return __builtin_popcount(n);
    }
};