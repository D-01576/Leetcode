class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int val = numsDivide[0];
        for(int n : numsDivide) {
            val = gcd(val, n);
        }
        
        sort(nums.begin(), nums.end());
        int operations = 0;
        
        for(int num : nums) {
            if(val % num == 0) {
                return operations;
            }
            operations++;
        }
        
        return -1;
    }
};
