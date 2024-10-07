class Solution {
public:
    int minLength(string s) {
        while(true){
            bool yes = false;
            for(int i = 0; i < s.size()-1; i++){
                string sub = s.substr(i,2);
                if(sub == "AB" || sub == "CD"){
                    yes = true;
                    s.erase(i, 2);
                    if(s.size() == 0) return 0;
                    i -= 2;
                }
            }
            if(!yes) break;
        }
        return s.size();
    }
};