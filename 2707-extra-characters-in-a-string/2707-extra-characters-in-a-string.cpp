#include <unordered_set>
#include <string>
#include <vector>

class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_set<string> dic(dictionary.begin(), dictionary.end());
        
        int n = s.size();
        vector<int> dp(n + 1, 0); 

        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i - 1] + 1;

            for (int j = i; j > 0; j--) {
                string current = s.substr(j - 1, i - j + 1);
                if (dic.find(current) != dic.end()) {
                    dp[i] = min(dp[i], dp[j - 1]);
                }
            }
        }
        
        return dp[n]; 
    }
};
