class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> neww;
        vector<int> newww;
        
        for(int i = 0 ; i < nums.size();i++){
            int reversedNum = 0;
            int temp = nums[i];
            while (temp > 0) {
                reversedNum = reversedNum * 10 + temp % 10;
                temp /= 10;
            }
            neww.push_back(reversedNum);
            newww.push_back(reversedNum);
            newww.push_back(nums[i]);
        }
        set<int> distinctElements(newww.begin(), newww.end());
        nums = neww;
        return distinctElements.size();
    }
};