class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, open = 0; 
        for(const auto& c : s){
            if(c == '('){
                open++;
            }else if(c == ')'){
                if(ans < open){
                    ans = open;
                }
                open--;
            }
        }
        return ans;
    }
};