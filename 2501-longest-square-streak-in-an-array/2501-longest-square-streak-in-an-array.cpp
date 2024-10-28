class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = -1;
        while(!nums.empty()){
            int current = nums[nums.size()-1];
            int target = sqrt(current);
            int temp = 1;
            if(target*target == current){
                int yes = true;
                while(yes){
                    int left = 0, right = nums.size()-2;
                    int too = false;
                    while (left <= right) {
                        int mid = left + (right - left) / 2;
                        if (nums[mid] == target) {
                            temp++;
                            nums.erase(nums.begin()+mid);
                            too = true;
                            int neww = sqrt(target);
                            if(neww*neww != target){
                                too = false;
                            }else {
                                target = neww;
                            }
                            break;
                        }
                        else if (nums[mid] < target) {
                            left = mid + 1;
                        }
                        else {
                            right = mid - 1;
                        }
                    }
                    if(!too){
                        yes = false;
                    }
                }
            }
            nums.erase(nums.begin()+nums.size()-1);
            if(temp > 1){
                ans = max(ans,temp);   
            }
        }
        return ans;
    }
};