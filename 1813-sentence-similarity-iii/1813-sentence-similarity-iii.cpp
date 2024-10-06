class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        vector<string> w1 = split(s1);
        vector<string> w2 = split(s2);
        int n1 = w1.size();
        int n2 = w2.size();
        int p = 0;
        int s = 0; 

        while (p < n1 && p < n2 && w1[p] == w2[p]) {
            p++;
        }

        while (s < n1 && s < n2 && w1[n1 - 1 - s] == w2[n2 - 1 - s]) {
            s++;
        }
        return p + s >= min(n1, n2);
    }
    
    vector<string> split(string s){
        vector<string> ans;
        string current = "";
        for(int i = 0 ; i < s.size();i++){
            if(s[i] == ' '){
                ans.push_back(current);
                current = "";
                continue;
            }
            current += s[i];
        }
        
        if(!current.empty()){
            ans.push_back(current);
        }
        return ans;
    }
};
