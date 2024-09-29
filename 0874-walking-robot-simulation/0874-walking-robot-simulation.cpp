class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> obs;
        for (const auto& obstacle : obstacles) {
            obs.insert(to_string(obstacle[0]) + "," + to_string(obstacle[1]));
        }
        int dir = 1; 
        int neg = 0; 
        int currentx = 0; 
        int currenty = 0; 
        int maxDist = 0; 
        
        for (int i = 0; i < commands.size(); i++) {
            if (commands[i] == -1) {
                if (dir == 1 && neg == 0) {
                    dir = 0;  
                } else if (dir == 0 && neg == 0) {
                    neg = 1;  
                    dir = 1;
                } else if (dir == 1 && neg == 1) {
                    dir = 0; 
                } else if (dir == 0 && neg == 1) {
                    dir = 1; 
                    neg = 0;
                }
            } else if (commands[i] == -2) {
                if (dir == 1 && neg == 0) {
                    dir = 0;
                    neg = 1;
                } else if (dir == 0 && neg == 0) {
                    dir = 1;
                } else if (dir == 1 && neg == 1) {
                    dir = 0;
                    neg = 0;
                } else if (dir == 0 && neg == 1) {
                    dir = 1;
                    neg = 1;
                }
            } else { 
                for (int j = 0; j < commands[i]; j++) {
                    int nextx = currentx;
                    int nexty = currenty;

                    if (dir == 1 && neg == 0) {
                        nexty++;
                    } else if (dir == 0 && neg == 0) {
                        nextx++;
                    } else if (dir == 1 && neg == 1) { 
                        nexty--;
                    } else if (dir == 0 && neg == 1) { 
                        nextx--;
                    }
                    string nextPos = to_string(nextx) + "," + to_string(nexty);
                    if (obs.find(nextPos) != obs.end()) {
                        break; 
                    }

                    currentx = nextx;
                    currenty = nexty;
                }
                
                maxDist = max(maxDist, currentx * currentx + currenty * currenty);
            }
        }
        
        return maxDist;
    }
};
