class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        priority_queue<int, vector<int>, greater<int>> a(players.begin(), players.end());
        priority_queue<int, vector<int>, greater<int>> b(trainers.begin(), trainers.end());

        int ans = 0;
        
        while (!a.empty() && !b.empty()) {
            if (a.top() <= b.top()) {
                ans++;  
                a.pop(); 
            }
            b.pop();    
        }
        
        return ans;
    }
};
