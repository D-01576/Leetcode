class Solution {
private:
    vector<string> ans;
public:
    void th(int n, int open, int close, string k){
        if(k.size() == n*2){
            ans.push_back(k);
            return;
        }
        
        if(close < open){
            th(n,open,close+1,k+')');
        }
        
        if(open < n){
            th(n,open+1,close,k+'(');
        }
    }
    vector<string> generateParenthesis(int n) {
        th(n,0,0,"");
        return ans;
    }
};