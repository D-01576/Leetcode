class Solution {
public:
    int differenceOfSums(int n, int m) {
        int totalsum = ((n)*(2+(n-1)))/2;
        int totald = n/m;
        cout<<totalsum<<endl;
        int num2 = ((totald)*(2*m +(totald-1)*m))/2;
        int num1 = totalsum-num2;
        cout<<num1<<endl;
        return num1-num2; 
    }
};