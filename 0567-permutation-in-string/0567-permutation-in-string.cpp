class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size = s1.size();
        if(size > s2.size()) return false;
        sort(s1.begin(),s1.end());
        
        for(int i = 0 ; i <= s2.size()-size; i++){
            string com = s2.substr(i,size);
            sort(com.begin(),com.end());
            if(com == s1){
                return true;
            }
        }
        return false;
    }
};