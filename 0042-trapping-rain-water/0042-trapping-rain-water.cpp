class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int temp = 0;
        int highest = 0;
        int indexheight = 0;

        for (int i = 0; i < height.size(); i++) {
            if (height[i] >= highest) {
                ans += temp; 
                temp = 0;    
                highest = height[i];  
                indexheight = i; 
            } else {
                temp += highest - height[i];
            }

            if (i == height.size() - 1 && temp > 0) {
                int secondHighest = 0;
                temp = 0;

                for (int j = height.size() - 1; j > indexheight; j--) {
                    if (height[j] >= secondHighest) {
                        secondHighest = height[j];
                    } else {
                        temp += secondHighest - height[j]; 
                    }
                }

                ans += temp; 
            }
        }

        return ans;
    }
};
