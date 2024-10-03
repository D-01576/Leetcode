class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
         const long long DAY = 24;
         for (auto &hour: hours) hour = hour % DAY;

         long long res = 0;
         vector<long long> count(24, 0);
         for (auto hour: hours) 
            res += count[(DAY - hour) % DAY],
            count[hour]++;
         return res;
    }
};