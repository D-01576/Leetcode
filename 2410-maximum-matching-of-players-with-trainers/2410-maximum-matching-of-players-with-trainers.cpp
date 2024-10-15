class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        priority_queue<int, vector<int>, greater<int>> pq1;
        for (auto x : players)
            pq1.push(x);
        
        priority_queue<int, vector<int>, greater<int>> pq2;
        for (auto x : trainers)
            pq2.push(x);
        
        int cnt = 0;
        
        while (!pq1.empty() && !pq2.empty()) {
            if (pq1.top() > pq2.top()) {
                pq2.pop();
            } else {
                cnt++;
                pq1.pop();
                pq2.pop();
            }
        }
        
        return cnt;
    }
};
