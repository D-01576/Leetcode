class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int mx = 0, mn = 0;
        bool foundmx = false;
        bool foundmn = false;
        int mxin = 0;
        int mnin = 0;
        for(int i = 0; i < s.size();i++){
            if(!foundmx){
                if(s[i] != '9'){
                    foundmx = true;
                    mxin = i;
                    cout<<mxin;
                }
            }

            if(!foundmn){
                if(s[i] != '0'){
                    mnin = i;
                    foundmn= true;
                }
            }
            if(foundmx && s[i] == s[mxin]){
                mx = mx*10;
                mx += 9;
                
            }else{
                mx = mx*10;
                mx += s[i] - '0';   
            }

            if(foundmn && s[i] == s[mnin]){
                mn = mn*10;
                mn += 0;
            }else{
                mn = mn*10;
                mn += s[i]-'0';
            }

        }
        cout<<mn;
        return mx-mn;
    }
};