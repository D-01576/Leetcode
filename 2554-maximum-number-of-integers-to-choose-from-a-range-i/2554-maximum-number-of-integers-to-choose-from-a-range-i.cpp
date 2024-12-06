class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        int ans = 0;
        int current = 0;
        int count = 0;
        for(int i = 1; i <= maxSum;i++){
            while(banned[current] < i && current != banned.size()-1){
                current++;
            }
            if(i == banned[current]) continue;
            if(i > n) break;
            count += i;
            if(count > maxSum) break;
            ans++;
        }
        return ans;
    }
};