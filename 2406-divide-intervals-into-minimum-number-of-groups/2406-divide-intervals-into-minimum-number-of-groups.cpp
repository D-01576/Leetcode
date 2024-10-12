class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> a;
        vector<int> b;
        
        for(const auto& i : intervals){
            int f = i[0];
            int s = i[1];
            a.push_back(f);
            b.push_back(s);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int i = 0,j = 0;
        int ans = 0;
        while(i < a.size()){
            if(a[i] <= b[j]){
                i++;
            }else {
                j++;
            }
            ans = max(ans,i-j);
        }
        return ans;
    }
};