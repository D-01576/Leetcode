#include <vector>
#include <string>

class Solution {
public:
    vector<string> letterCombinations(const string& digits) {
        vector<string> ans;
        if (digits.empty()) return ans;

        std::vector<std::string> keypad(10);
        keypad[2] = "abc";
        keypad[3] = "def";
        keypad[4] = "ghi";
        keypad[5] = "jkl";
        keypad[6] = "mno";
        keypad[7] = "pqrs";
        keypad[8] = "tuv";
        keypad[9] = "wxyz";

        int numDigits = digits.size();
        if (numDigits == 1) {
            string letters = keypad[digits[0] - '0'];
            for (char c : letters) {
                ans.push_back(string(1, c));
            }
            return ans;
        }

        for (char c : keypad[digits[0] - '0']) {
            ans.push_back(std::string(1, c));
        }
        for (int i = 1; i < numDigits; ++i) {
            vector<string> temp;
            string letters = keypad[digits[i] - '0'];

            for (const std::string& combination : ans) {
                for (char c : letters) {
                    temp.push_back(combination + c);
                }
            }
            ans = temp;
        }

        return ans;
    }
};
