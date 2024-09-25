class Solution {
public:
    char findTheDifference(string s, string t) {
        char dif = 0;
        for(char c : s){
            dif ^= c;
        }
        for(char c : t){
            dif ^= c;
        }
        return dif;
    }
};