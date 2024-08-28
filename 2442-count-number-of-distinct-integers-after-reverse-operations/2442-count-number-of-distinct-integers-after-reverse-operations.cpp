#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> distinctElements;
        for (int num : nums) {
            distinctElements.insert(num); 
            int reversedNum = 0, temp = num;
            while (temp > 0) {
                reversedNum = reversedNum * 10 + temp % 10;
                temp /= 10;
            }
            distinctElements.insert(reversedNum);
        }
        return distinctElements.size();
    }
};
