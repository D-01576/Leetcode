class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum = 0;
        int n = skill.size();
        
        for (int sk : skill) {
            sum += sk;
        }
        
        if (sum % (n / 2) != 0) {
            return -1;
        }
        
        long long target = sum / (n / 2);
        long long multi = 0;
        int left = 0, right = n-1;
        sort(skill.begin(),skill.end());
        while(left < right){
            if(skill[left] + skill[right] != target)return -1;
            
            multi += 1ll * skill[left] * skill[right];
            left++;
            right--;
        }
        return multi;
    }
};
