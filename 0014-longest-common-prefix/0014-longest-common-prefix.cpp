class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int much = strs[0].size();
        for (int i = 1; i < strs.size(); i++) {
            if (strs[i].size() < much) {
                much = strs[i].size();
            }
        }
        
        string prefix = "";
        for(int j = 0 ; j < much;j++){
            char current = strs[0][j];
            for(int i = 1 ; i < strs.size();i++){
                if(current != strs[i][j]){
                    return prefix;
                }
            }
            prefix += current;
        }
        return prefix;
    }
};