class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string longest = "";

        for (int atindex = 0; atindex < n; ++atindex) {
            for (int to = atindex; to < n; ++to) {
                bool isPalindrome = true;
                int left = atindex;
                int right = to;
                while (left < right) {
                    if (s[left] != s[right]) {
                        isPalindrome = false;
                        break;
                    }
                    left++;
                    right--;
                }
                if (isPalindrome) {
                    string currentSubstr = s.substr(atindex, to - atindex + 1);
                    if (currentSubstr.size() > longest.size()) {
                        longest = currentSubstr;
                    }
                }
            }
        }

        return longest;
    }
};
