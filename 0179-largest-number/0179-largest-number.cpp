class Solution {
public:
    static bool compare(int n, int m) {
        return to_string(n) + to_string(m) > to_string(m) + to_string(n);
    }
    
    string largestNumber(vector<int>& nums) {
        string ans = "";
        sort(nums.begin(), nums.end(), compare);
        
        if (nums[0] == 0) return "0";
        
        for (int i = 0; i < nums.size(); i++) {
            ans += to_string(nums[i]);
        }
        
        return ans;
    }
};
