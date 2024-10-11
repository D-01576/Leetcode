#include <vector>
using namespace std;

class Solution {
private:
    vector<vector<int>> ans;
    vector<int> candidates;
    void solve(int start, vector<int>& current, int target) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }
        
        for (int i = start; i < candidates.size(); ++i) {
            if (candidates[i] > target) continue; 
            
            current.push_back(candidates[i]); 
            solve(i, current, target - candidates[i]); 
            current.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidate, int target) {
        vector<int> current;
        candidates = candidate;
        solve(0, current, target);
        return ans;
    }
};
