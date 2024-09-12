class Solution {
public:
    int partitionString(string s) {
        int ans = 1;
        string j = "";
        j = s[0];
        for(int i = 1 ; i < s.size();i++){
            bool ifk = false;
            for(int k = 0 ; k < j.size();k++){
                if(j[k] == s[i]){
                    ans++;
                    j = s[i];
                    ifk = true;
                    break;
                }
            }
            if(!ifk){
                j += s[i];
            }
        }
        return ans;
    }
};