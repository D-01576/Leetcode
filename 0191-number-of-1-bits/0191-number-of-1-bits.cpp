class Solution {
public:
    int hammingWeight(int n) {
        int ans = 0;
        for(int i=0; n>0; i++)    
        {    
            if(n%2 != 0) ans++; 
            n= n/2;  
        }    
        return ans;
    }
};