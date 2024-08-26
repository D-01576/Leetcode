class Solution {
public:
    string compressedString(string word) {
        string ans;
        
        char current = word[0];
        int times = 1;
        for(int i = 1; i < word.size();i++){
            if(current == word[i] && times<9){
                times++;
            }else{
                ans += to_string(times);
                ans += current;
                current = word[i];
                times = 1;
            }
        }
        ans += to_string(times);
        ans += current;
        
        return ans;
    }
};