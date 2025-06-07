class Solution {
public:
    bool isTriangle(int a, int b,int c) {
    return a + b > c && a + c > b && b + c > a;
    }
    string triangleType(vector<int>& nums) {
        if(!isTriangle(nums[0],nums[1],nums[2])) return "none";
        if(nums[0] == nums[1] && nums[0] == nums[2]){
            return "equilateral";
        }
        if(nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]){
            return "isosceles";
        }
        return "scalene";
    }
};