class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        if(s.size() == 1){
            return romanValues[s[0]];
        }
        for(int i = 0 ; i < s.size();i++){
            int value = romanValues[s[i+1]];
            int val = romanValues[s[i]];
            if(val >= value){
                ans += val;
            }
            else{
                ans += value-val;
                i++;
            }
        }
        return ans;
    }
};
