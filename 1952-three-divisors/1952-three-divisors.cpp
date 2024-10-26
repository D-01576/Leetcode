class Solution {
public:
    bool isThree(int k) {
        int count = 0;
        for (int i = 1; i <= k; i++) {
            if (k % i == 0) count++;  
        }
        return count == 3;  
    }
};
