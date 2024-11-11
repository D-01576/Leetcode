class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) return false;
        if (num == 2) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) return false;
        }
        return true;
    }
    int paraj(int x, int jj) {
        for (int i = 2; i < x; ++i) {
            if (isPrime(i) && (x - i) < jj) {
                return x - i;
            }
        }
        return -1;
    }
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        for(int i = n-2;i >= 0;i--){
            if(nums[i] >= nums[i+1]){
                int num = paraj(nums[i],nums[i+1]);
                if(num == -1) return false;
                nums[i] = num;
            }
        }
        return true;
    }
};