class Solution {
public:
    string clearDigits(string s) {
        string ans = s;
        for(int i = 0; i < ans.size();i++){
            if(isdigit(ans[i])){
                if(i!=0 && !isdigit(ans[i-1])){
                    ans.erase(i-1, 2);
                    i = i-2;
                }else{
                    ans.erase(i, 1);
                    i = i-1;
                }
            }
        }
        return ans;
    }
};