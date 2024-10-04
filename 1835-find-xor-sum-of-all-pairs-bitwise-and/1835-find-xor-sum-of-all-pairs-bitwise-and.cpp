class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int current1 = 0;
        int current2 = 0;
        for(int a: arr1) current1 = current1^a;
        for(int b : arr2) current2 = current2^b;
        
        return current1&current2;
    }
};