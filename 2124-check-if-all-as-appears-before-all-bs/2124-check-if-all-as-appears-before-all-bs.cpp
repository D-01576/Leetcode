class Solution {
public:
    bool checkString(string s) {
        int now = false;
        
        for(int i = 0 ; i < s.size();i++){
            if(now){
                if(s[i] != 'b'){
                    return false;
                }
            }
            else{
                if(s[i] == 'b'){
                    now = true;
                }
            }
        }
        return true;
    }
};