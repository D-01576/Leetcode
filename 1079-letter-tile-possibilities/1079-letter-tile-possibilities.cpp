class Solution {
public:
    unordered_set<string> ti; 

    void backtrack(string current, string remain) {
        if (!current.empty()) {
            ti.insert(current);
        }
        
        if (remain.empty()) {
            return;
        }
        
        for (int i = 0; i < remain.size(); i++) {
            string temp = current; 
            temp += remain[i];  

            string newRemain = remain;
            newRemain.erase(i, 1);     
            backtrack(temp, newRemain);
        }
    }

    int numTilePossibilities(string tiles) {
        backtrack("", tiles);
        return ti.size();
    }
};
