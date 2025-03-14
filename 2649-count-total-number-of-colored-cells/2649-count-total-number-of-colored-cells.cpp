class Solution {
public:
    long long coloredCells(int s) {
        long long n = s;
        long long sum = 0;
        sum += n*n;
        int temp = s;
        while(temp > 1){
            temp -= 2;
            sum += (temp)*4;
        }
        if(n%2 == 0) return sum+1;
        return sum;
    }
};