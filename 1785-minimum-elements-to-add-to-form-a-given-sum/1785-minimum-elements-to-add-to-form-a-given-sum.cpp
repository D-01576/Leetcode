class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum = 0;
        for(int n: nums){
            sum += n;
        }
        long long target = abs(sum - goal);
        return (target+limit-1)/limit;
    }
};