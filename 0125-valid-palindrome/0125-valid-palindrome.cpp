class Solution {
public:
    bool isPalindrome(const string& s) {
        string swith = "";
        string palin = "";
        
        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(s[i]) || isdigit(s[i])) {
                swith += tolower(s[i]);
            }
        }
        
        for (int i = swith.size() - 1; i >= 0; --i) {
            palin += swith[i];
        }
        
        return swith == palin;
    }
};
