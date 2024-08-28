class Solution {
public:
    bool isSameAfterReversals(int num) {
        // int x = num;
        // int ans = 0;
        // int again = 0;
        // while(num > 0){
        //     ans = ans * 10 + (num % 10);
        //     num /= 10;
        // }
        // while(ans > 0){
        //     again = again * 10 + (ans % 10);
        //     ans /= 10;
        // }
        // return x == again; 
        string j = to_string(num);
        if(j.size() < 2) return true;
        return j[j.size()-1] != '0';
    }
};