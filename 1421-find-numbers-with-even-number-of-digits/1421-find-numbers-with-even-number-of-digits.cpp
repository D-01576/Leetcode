class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int a : nums) if(to_string(a).size() % 2 == 0) ans++;
        return ans;
    }
};