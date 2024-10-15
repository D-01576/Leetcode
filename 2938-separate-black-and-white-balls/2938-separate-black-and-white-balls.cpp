class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0;
        long long si = 0;
        for(long long i = 0 ; i < s.size();i++){
            if(s[i] == '1'){
                si = i;
                break;
            }
        }
        for(long long i = si; i < s.size();i++){
            if(s[i] == '0'){
                ans += i - si;
                si++;
            }
        }
        return ans;
    }
};