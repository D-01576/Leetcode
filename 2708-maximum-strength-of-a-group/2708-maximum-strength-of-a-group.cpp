class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        vector<int> negatives;
        bool hasP = false;
        long long product = 1;
        for(int num : nums){
            if(num > 0){
                product *= num;
                hasP = true;
            }else if(num < 0){
                negatives.push_back(num);
            }
        }
        if(!hasP && nums.size() == 1 && negatives.size() == 1){
            return negatives[0];
        }
        sort(negatives.begin(),negatives.end());
        if(negatives.size() % 2 != 0){
            negatives.pop_back();
        }
        
        for(int i = 0 ; i < negatives.size();i++){
            product *= negatives[i];
        }
        
        if(!hasP && negatives.empty()){
            return 0;
        }
        return product;
    }
};