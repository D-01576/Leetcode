class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> check;

        for(int i = nums.size()-1; i >=0 ;i--){
            check[nums[i]]++;
            if(check[nums[i]] > 1){
                return i/3+1;
            }
        }
        return 0;
    }
};