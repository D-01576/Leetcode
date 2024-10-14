class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> n(nums.begin(),nums.end());
        long long ans = 0;
        for (int i = 0; i < k; i++) {
            int num = n.top(); 
            ans += num;
            if(num == 1){
                ans+=(k-1-i);
                break;
            }
            num = ceil(num / 3.0);
            
            n.pop(); 
            n.push(num);
        }

        return ans;
    }
};
