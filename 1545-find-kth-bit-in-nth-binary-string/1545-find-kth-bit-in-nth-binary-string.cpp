class Solution {
public:
    string solve(string s){
        string ans = "";
        ans += "1";
        for(int i = s.size()-1; i >= 0;i--){
            if(s[i] == '0'){
                ans += "1";
            }else {
                ans += "0";
            }
        }
        return ans;
    }
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i = 1; i < n;i++){
            string toAdd = solve(s);
            s += toAdd;
        }
        return s[k-1];
    }
};