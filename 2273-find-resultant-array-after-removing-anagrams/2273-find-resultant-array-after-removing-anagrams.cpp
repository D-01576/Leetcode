class Solution {
public:
    vector<string> removeAnagrams(vector<string>& strs) {
        vector<string> group;
        
        while(!strs.empty()){
            string first = strs[0];
            sort(first.begin(), first.end());
            group.push_back(strs[0]);
            strs.erase(strs.begin());

            for(int i = 0; i < strs.size(); i++){
                string now = strs[i];
                sort(now.begin(), now.end());
                if(first == now){
                    strs.erase(strs.begin() + i);
                    i--; 
                }else{
                    break;
                }
            }
        }
        return group;
    }
};