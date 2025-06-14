class Solution {
public:
    int minMaxDifference(int num) {
        int mx = 0, mn = 0;
        bool foundmx = false;
        bool foundmn = false;
        int mxin = 0;
        int mnin = 0;
        int pow10 = 1;
        while (pow10 * 10 <= num) {
            pow10 *= 10;
        }

        int n = num;
        while (pow10 > 0) {
            int digit = n / pow10;
            n %= pow10;
            pow10 /= 10;
            if(!foundmx){
                if(digit != 9){
                    foundmx = true;
                    mxin = digit;
                    cout<<mxin;
                }
            }

            if(!foundmn){
                if(digit != 0){
                    mnin = digit;
                    foundmn= true;
                }
            }
            if(foundmx && digit == mxin){
                mx = mx*10;
                mx += 9;
                
            }else{
                mx = mx*10;
                mx += digit;   
            }

            if(foundmn && digit == mnin){
                mn = mn*10;
                mn += 0;
            }else{
                mn = mn*10;
                mn += digit;
            }

        }
        cout<<mn;
        return mx-mn;
    }
};