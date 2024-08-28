class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        bool isNagative = (x<0);
        x = abs(x);
        while(x>0){
            if (ans > (INT_MAX - x % 10) / 10) return 0;
            
            ans = ans * 10 + (x % 10);
            x /= 10;
        }
        return isNagative ? -ans : ans;
    }
};