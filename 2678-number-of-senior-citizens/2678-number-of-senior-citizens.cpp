class Solution {
public:
    int countSeniors(vector<string>& details) {
    int ans = 0;
    
    for (const string& detail : details) {
        int age = stoi(detail.substr(11, 2));
        if (age > 60) {
            ans++;
        }
    }
    
    return ans;
}
};