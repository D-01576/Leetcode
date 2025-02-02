class Solution {
public:
    int maxDifference(string s) {
        sort(s.begin(),s.end());
        int high = 0, low = INT_MAX;
        char res = s[0];
        int temp = 0;
        for(char a : s){
            if(res == a){
                temp++;
            }else {
                if(temp % 2 == 0){
                    low = min(low, temp);
                }else {
                    high = max(temp,high);
                }
                temp = 1;
                res = a;
            }
        }
        if(temp % 2 == 0){
            low = min(low, temp);
        }else {
            high = max(temp,high);
        }
        return high-low;
    }
};