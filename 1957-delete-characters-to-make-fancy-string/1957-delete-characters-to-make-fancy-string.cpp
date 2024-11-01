class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        char current = s[0];
        ans += current;
        int count = 1;
        for(int i = 1; i < s.size();i++){
            if(s[i] == current){
                count++;
                if(count < 3){
                    ans += current;
                }
            }else {
                current = s[i];
                ans += current;
                count = 1;
            }
        }
        return ans;
    }
};