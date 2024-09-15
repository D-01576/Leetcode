class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        string instring = to_string(num);
        
        string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X",           "IX", "V", "IV", "I"};
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        for(int i = 0; i < 13;i++){
            while(num - values[i] >= 0){
                ans += str_romans[i];
                num -= values[i];
            }
        }
        return ans;
        
    }
};