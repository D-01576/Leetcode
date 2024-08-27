class Solution {
public:
    string sortSentence(string s) {
        string sorted = "";
        string current = "";
        vector<string> j(9, "");
        bool yes = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
               
            }
            else if (!isdigit(s[i]) && yes == true) {
                current += s[i];
            }
            else if (!isdigit(s[i]) && yes == false) {
                current += s[i];
                yes = true;
            }
            else if (isdigit(s[i])) {
                yes = false;
                j[s[i] - '1'] = current; 
                current = "";
            }
        }

        for (int i = 0; i < j.size(); i++) {
            if (!j[i].empty()) {
                sorted += j[i];
                sorted += " ";
            }
        }

        if (!sorted.empty()) {
            sorted.pop_back(); 
        }

        return sorted;
    }
};
