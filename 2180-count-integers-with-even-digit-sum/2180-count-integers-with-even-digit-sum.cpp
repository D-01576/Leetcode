class Solution {
public:
    int countEven(int num) {
        int count = 0;
        
        for (int i = 1; i <= num; ++i) {
            int sumOfDigits = 0;
            int current = i;
            
            while (current > 0) {
                sumOfDigits += current % 10;
                current /= 10;
            }
            
            if (sumOfDigits % 2 == 0) {
                ++count;
            }
        }
        
        return count;
    }
};
