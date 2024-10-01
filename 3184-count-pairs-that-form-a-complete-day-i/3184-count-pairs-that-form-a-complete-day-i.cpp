class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        // int ans = 0;
        // for(int i = 0 ; i < hours.size();i++){
        //     for(int j = i + 1;j < hours.size();j++){
        //         if((hours[i]+hours[j]) % 24 == 0){
        //             ans++;
        //         }
        //     }
        // }
        // return ans;
         const int DAY = 24;
        for (auto &hour: hours) hour = hour % DAY;

        int res = 0;
        vector<int> count(24, 0);
        for (auto hour: hours) 
            res += count[(DAY - hour) % DAY],
            count[hour]++;
        return res;
    }
};