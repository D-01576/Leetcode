class Solution {
public:
    string shortestPalindrome(string s) {
        if (s.empty()) return "";
        string rev = string(s.rbegin(), s.rend());
        string combined = s + "#" + rev;
        vector<int> prefix(combined.size(), 0);
        for (int i = 1; i < combined.size(); i++) {
            int j = prefix[i - 1];
            while (j > 0 && combined[i] != combined[j]) {
                j = prefix[j - 1];
            }
            if (combined[i] == combined[j]) {
                j++;
            }
            prefix[i] = j;
        }

        int palLength = prefix.back();
        string nonPalindromicSuffix = s.substr(palLength);

        string addR = string(nonPalindromicSuffix.rbegin(), nonPalindromicSuffix.rend());
        return addR + s;
    }
};
