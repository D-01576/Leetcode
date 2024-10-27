class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int k = 0 ; k < nums.size();k++){
            int number = nums[k];
            int count = 0;
            int sum = 0;
            for (int i = 1; i <= sqrt(number); i++) {
                if (number % i == 0) {
                    sum += i;
                    count++;
                    if (i != number / i) {
                        sum += number/i;
                        count++;
                    }
                    if(count > 4) break;
                }
            }
            if(count == 4){
                ans+= sum;
            }
        }
        return ans;
    }
};