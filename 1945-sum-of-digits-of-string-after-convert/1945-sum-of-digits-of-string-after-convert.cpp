class Solution {
public:
    int getLucky(string s, int k) {
        string sans = "";
        
        for(int i = 0 ; i < s.size();i++){
            int val = s[i] - 'a' + 1;
            sans += to_string(val);
        }
        
        for(int i = 0 ; i < k;i++){
            int temp = 0;
            for(int j = 0 ; j < sans.size();j++){
                temp += sans[j]-'0';
            }
            
            sans = to_string(temp);
        }
        return stoi(sans);
    }
};