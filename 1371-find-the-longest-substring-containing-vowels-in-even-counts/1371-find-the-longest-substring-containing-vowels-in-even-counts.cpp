#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> startchar;
        int max_len = 0;
        int bitmask = 0;
        startchar[0] = -1;

        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];

            if (c == 'a') bitmask ^= (1 << 0);
            if (c == 'e') bitmask ^= (1 << 1);
            if (c == 'i') bitmask ^= (1 << 2);
            if (c == 'o') bitmask ^= (1 << 3);
            if (c == 'u') bitmask ^= (1 << 4);

            if (startchar.find(bitmask) == startchar.end()) {
                startchar[bitmask] = i;
            } else {
                max_len = max(max_len, i - startchar[bitmask]);
            }
        }

        return max_len;
    }
};
