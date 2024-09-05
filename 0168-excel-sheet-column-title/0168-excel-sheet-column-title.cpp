class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
        while (columnNumber > 0) {
            columnNumber--; 
            result = alphabet[columnNumber % 26] + result;
            columnNumber /= 26;
        }
        
        return result;
    }
};
