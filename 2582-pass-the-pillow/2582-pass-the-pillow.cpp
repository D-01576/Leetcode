class Solution {
public:
    int passThePillow(int n, int time) {
        int ans = 1;
        bool reverse = false;
        if(time < n){
            return time+1;
        }
        while(time--){
            if(reverse){
                ans--;
            }else{
                ans++;
            }
            
            if(ans == n){
                reverse  = true;
            }else if(ans == 1){
                reverse = false;
            }
        }
        return ans;
    }
};