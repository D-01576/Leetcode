class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> check;

        for(int i = nums.size()-1; i >=0 ;i--){
            if(check.find(nums[i]) != check.end()){
                return i/3+1;
            }
            check[nums[i]]++;
        }
        return 0;
    }
};