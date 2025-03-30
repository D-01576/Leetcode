class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> ans;
        int current = cost[0];
        ans.push_back(current);
        for(int i = 1; i < cost.size();i++){
            if(current > cost[i]){
                current = cost[i];
            }
            ans.push_back(current);
        }
        return ans;
    }
};