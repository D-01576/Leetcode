class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> answer(n);
        int min_cost = INT_MAX;
        for (int i = 0; i < n; i++) {
            min_cost = min(min_cost, cost[i]);
            answer[i] = min_cost;
        }
        return answer;
    }
};