#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk;
        std::unordered_map<char, char> matching_bracket = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                stk.push(ch);
            } else if (ch == ')' || ch == ']' || ch == '}') {
                if (stk.empty() || stk.top() != matching_bracket[ch]) {
                    return false;
                }
                stk.pop();
            } else {
                return false; 
            }
        }

        return stk.empty(); 
    }
};
