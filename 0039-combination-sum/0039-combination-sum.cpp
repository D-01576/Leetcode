#include <vector>
using namespace std;

class Solution {
private:
    vector<vector<int>> ans;
    
    void solve(vector<int>& candidates, int start, vector<int>& current, int target) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }
        
        for (int i = start; i < candidates.size(); ++i) {
            if (candidates[i] > target) continue; 
            
            current.push_back(candidates[i]); 
            solve(candidates, i, current, target - candidates[i]); 
            current.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        solve(candidates, 0, current, target);
        return ans;
    }
};
