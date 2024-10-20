class Solution {
public:
    vector<string> ans;
    void solve(int i, string current,string target){
        if (i == target.size()) return;
        current += "a";
        ans.push_back(current);
        
        while(current.back() != target[i]){
            current.back()++;
            ans.push_back(current);
        }
        solve(i+1,current,target);
    }
    vector<string> stringSequence(string target) {
        solve(0,"",target);
        return ans;
    }
};