class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size()==1) {
            return s;
        }

        string ans = "";
        int nowone = numRows - 2;
        vector<string> now(numRows);
        int current = 0;
        int alsocurrent = numRows - 2;
        int much = 0;
        bool to = false;

        for (int i = 0; i < s.size(); i++) {
            if (!to) {
                now[current] += s[i];
                current++;
                if (current == numRows) {
                    to = true;
                    alsocurrent = numRows - 2;
                    much = 0;
                }
            } else {
                now[alsocurrent] += s[i];
                alsocurrent--;
                much++;
                if (much == nowone + 1) {
                    to = false;
                    current = 1; 
                }
            }
        }
        for (int i = 0; i < numRows; i++) {
            ans += now[i];
        }

        return ans;
    }
};
