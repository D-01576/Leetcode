class Solution {
public:
    int minFlips(int a, int b, int c) {
        string that = convertToBinary(a);
        string to = convertToBinary(b);
        string to1 = convertToBinary(c);
        int maxLength = max(to1.length(), max(that.length(), to.length()));

        while (that.length() < maxLength) {
            that = "0" + that;
        }
        
        while (to.length() < maxLength) {
            to = "0" + to;
        }
        
        while (to1.length() < maxLength) {
            to1 = "0" + to1;
        }

        int ans = 0;
        for(int i = 0 ; i < maxLength; i++) {
            if (to1[i] == '1') {
                if (that[i] == '0' && to[i] == '0') {
                    ans++;
                }
            } else {
                if (that[i] == '1') {
                    ans++;
                }
                if (to[i] == '1') {
                    ans++;
                }
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
