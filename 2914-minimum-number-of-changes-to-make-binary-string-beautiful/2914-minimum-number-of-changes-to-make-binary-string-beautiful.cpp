class Solution {
public:
    int minChanges(string s) {
        int one = 0;
        for(int i = 0; i < s.size();i+=2){
            one  += (s[i] != s[i+1]);
        }
        return one;
    }
};