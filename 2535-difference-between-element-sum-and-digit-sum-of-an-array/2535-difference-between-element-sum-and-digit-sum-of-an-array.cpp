class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int num1 = 0;
        int num2 = 0;
        
        string inString = "";
        for(int i = 0 ; i < nums.size();i++){
            num1 += nums[i];
            int temp = 0;
            inString = to_string(nums[i]);
            for(int j = 0 ; j < inString.size();j++){
                temp += inString[j]-'0';
            }
            num2 += temp;
        }
        return num1 - num2;
    }
};