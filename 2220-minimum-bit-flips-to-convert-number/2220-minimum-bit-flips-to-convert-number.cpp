class Solution {
public:
    int minBitFlips(int start, int goal) {
        string that = convertToBinary(start);
        string to = convertToBinary(goal);
        int maxLength = max(that.length(), to.length());

        while (that.length() < maxLength) {
            that = "0" + that;
        }
        
        while (to.length() < maxLength) {
            to = "0" + to;
        }
        int ans = 0;
        
        for(int i = 0 ; i < maxLength; i++){
            if(that[i] != to[i]){
                ans++;
            }
        }
        return ans;
        }
    
        string convertToBinary(int number) {
            if (number == 0) {
                return "0";
            }
            string binary = "";
            while (number > 0) {
                binary = (number % 2 == 0 ? "0" : "1") + binary; 
                number /= 2; 
            }
            return binary;
        }
};