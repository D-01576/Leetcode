class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        
        for (const string& time : timePoints) {
            int hours = stoi(time.substr(0, 2));
            int mins = stoi(time.substr(3, 2));
            minutes.push_back(hours * 60 + mins);
        }

        sort(minutes.begin(), minutes.end());
        
        int minDiff = INT_MAX;

        for (int i = 1; i < minutes.size(); i++) {
            int diff = minutes[i] - minutes[i - 1];
            minDiff = min(minDiff, diff);
        }

        int circularDiff = (1440 - minutes.back()) + minutes.front();
        minDiff = min(minDiff, circularDiff);
        
        return minDiff;
    }
};
