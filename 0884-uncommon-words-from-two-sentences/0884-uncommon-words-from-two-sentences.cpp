class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string full = s1 + " " + s2;
        vector<string> ans;  
        unordered_map<string, int> wordCount;

        int currentStart = 0;
        for (int i = 0; i <= full.size(); i++) {
            if (i == full.size() || full[i] == ' ') {
                if (i > currentStart) { 
                    string word = full.substr(currentStart, i - currentStart);
                    wordCount[word]++;
                }
                currentStart = i + 1;
            }
        }

        for(const auto& word : wordCount){
            if(word.second == 1){
                ans.push_back(word.first);
            }
        }
        return ans;
    }
};
