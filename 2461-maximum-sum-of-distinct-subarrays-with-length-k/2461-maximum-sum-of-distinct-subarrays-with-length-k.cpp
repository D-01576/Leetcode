class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        long long sum = 0;
        unordered_map<int, int> freq;
        
        for (int i = 0; i < k; i++) {
            sum += nums[i];
            freq[nums[i]]++;
        }

        if (freq.size() == k) {
            ans = sum;
        }

        for (int i = k; i < nums.size(); i++) {
            int outgoing = nums[i - k];
            int incoming = nums[i];
            sum = sum - outgoing + incoming;
            freq[outgoing]--;
            if (freq[outgoing] == 0) {
                freq.erase(outgoing);
            }
            freq[incoming]++;

            if (freq.size() == k) {
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};
