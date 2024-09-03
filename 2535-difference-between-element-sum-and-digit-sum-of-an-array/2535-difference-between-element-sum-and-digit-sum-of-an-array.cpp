class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int num1 = 0; 
        int num2 = 0; 
        
        for (int num : nums) { 
            num1 += num;
            
            int temp = num;
            while (temp > 0) {
                num2 += temp % 10; 
                temp /= 10;   
            }
        }
        
        return num1 - num2; 
    }
};
