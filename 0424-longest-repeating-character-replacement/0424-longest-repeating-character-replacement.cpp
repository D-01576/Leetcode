class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> th;
        int ans = 0;
        int maxf = 0;
        int l = 0;
        for(int r = 0 ; r < s.size();r++){
            th[s[r]]++;
            maxf = max(maxf, th[s[r]]);
            
            if(r-l+1-maxf > k){
                th[s[l]]--;
                l++;
            }
            
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};