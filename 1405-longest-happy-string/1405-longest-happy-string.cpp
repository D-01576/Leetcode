class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans = "";
        priority_queue<pair<int,char>> doo;
        if(a > 0) doo.push({a,'a'});
        if(b > 0) doo.push({b,'b'});
        if(c > 0) doo.push({c,'c'});
        
        while(!doo.empty()){
            auto [c, s] = doo.top();
            doo.pop();
            
            if(ans.size() > 1 && ans[ans.size()-1] == s && ans[ans.size()-2] == s){
                if(doo.empty()) break;
                
                auto [ac,as] = doo.top();
                doo.pop();
                ans += as;
                if(--ac > 0) doo.push({ac,as});
                
                doo.push({c,s});
            }
            else{
                ans += s;
                if(--c > 0) doo.push({c,s});
            }
        }
        return ans;
    }
};