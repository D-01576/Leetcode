class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int a : nums) if((a >= 10 && a <= 99) || (a>=1000 && a<=9999) || (a>=100000 && a<=999999)) ans++;
        return ans;
    }
};