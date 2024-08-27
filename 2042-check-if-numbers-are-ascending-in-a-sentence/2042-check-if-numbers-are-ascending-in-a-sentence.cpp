class Solution {
public:
    bool areNumbersAscending(string s) {
        int current = 0;
        for(int i = 0 ; i < s.size();i++){
            if(isdigit(s[i])){
                int num = 0;
                while(i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                if(num <= current) {
                    return false;
                }
                current = num;
            }
        }
        return true;
    }
};