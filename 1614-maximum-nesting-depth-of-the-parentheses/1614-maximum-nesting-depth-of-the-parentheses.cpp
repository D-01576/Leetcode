class Solution {
public:
    int maxDepth(string s) {
        int max = 0;
        int current = 0;
        
        for(int i = 0 ; i < s.size();i++){
            if(s[i] == '('){
                current++;
            }
            else if(s[i] == ')'){
                if(max < current){
                    max = current;
                }
                current--;
            }
        }
        return max;
    }
};