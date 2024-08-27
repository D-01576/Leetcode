class Solution {
public:
    int myAtoi(string s) {
        long long result = 0;
        bool minus = false;
        int i = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            minus = (s[i] == '-');
            i++;
        }
        while (i < s.size() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            if (!minus && result > INT_MAX) return INT_MAX;
            if (minus && -result < INT_MIN) return INT_MIN;
            i++;
        }

        return minus ? -result : result;
    }
};
