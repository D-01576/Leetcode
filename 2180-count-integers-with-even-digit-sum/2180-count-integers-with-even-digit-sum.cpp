class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for(int i = 1; i <= num ;i++){
            string s = to_string(i);
            int temp = 0;
            for(int i = 0 ; i < s.size();i++){
                temp += s[i] - '0';
            }
            if(temp % 2 == 0){
                ans++;
            }
        }
        return ans;
    }
};