class Solution {
public:
    bool isHappy(int n) {
        bool ishap = false;
        int times = 0;
        string num = to_string(n);
        while(!ishap && times < 10) {
            int number = 0;
            for(int i = 0; i < num.size(); i++){
                number += (num[i] - '0') * (num[i] - '0');
            }
            if(number == 1){
                ishap = true;
            } else {
                num = to_string(number);
            }
            times++;
        }
        return ishap;
    }
};
