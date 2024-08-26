class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        vector<string> j;
        
        char current = chars[0];
        int times = 1;
        for(int i = 1; i < chars.size(); i++){
            if(current == chars[i]){
                times++;
            }else{
                j.push_back(string(1, current));
                if(times > 1){
                    j.push_back(to_string(times));
                }
                current = chars[i];
                times = 1; 
            }
        }
        j.push_back(string(1, current));
        if(times > 1){
            j.push_back(to_string(times));
        }
        
        chars.clear();
        for(const auto& s : j) {
            for(const char c : s) {
                chars.push_back(c);
            }
        }
        
        return chars.size();
    }
};
