class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        sort(spaces.begin(),spaces.end());
        int current = 0;
        for(int i = 0; i < spaces.size();i++){
            ans += s.substr(current, spaces[i]-current);
            current = spaces[i];
            ans += " ";
        }
        ans += s.substr(current, s.size()-current);
        return ans;
    }
};