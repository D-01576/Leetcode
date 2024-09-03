class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int num1 = 0;
        int num2 = 0;
        
        string inString = "";
        for(int i = 0 ; i < nums.size();i++){
            num1 += nums[i];
            
            while (nums[i] > 0) {
                num2 += nums[i] % 10;
                nums[i] /= 10;
            }
        }
        return num1 - num2;
    }
};