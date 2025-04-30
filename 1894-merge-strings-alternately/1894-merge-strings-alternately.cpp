class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int one = word1.size(), two = word2.size();
        for(int i = 0; i < max(one,two);i++){
            if(i < one){
                ans += word1[i];
            }
            if(i < two){
                ans += word2[i];
            }
        }
        return ans;
    }
};