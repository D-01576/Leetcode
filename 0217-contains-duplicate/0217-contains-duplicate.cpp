#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> unique_elements;
        for (const int& num : nums) {
            if (unique_elements.find(num) != unique_elements.end()) {
                return true;
            }
            unique_elements.insert(num);
        }
        return false;
    }
};
