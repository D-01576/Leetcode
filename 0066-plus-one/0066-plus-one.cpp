class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        ans.push_back(1);
        for(int i = digits.size()-1; i >= 0;i--){
            if(digits[i] != 9){
                digits[i]++;
                break;
            }else {
                digits[i] = 0;
            }
            ans.push_back(0);
            if(i == 0){
                return ans;
            }
        }
        return digits;
    }
};