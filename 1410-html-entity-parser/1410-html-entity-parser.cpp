class Solution {
public:
    string entityParser(string text) {
        string ans = "";
        unordered_map<string, string> ent = {
            {"&quot;", "\""},
            {"&apos;", "'"},
            {"&amp;", "&"},
            {"&gt;", ">"},
            {"&lt;", "<"},
            {"&frasl;", "/"}
        };
        string current = "";
        for(int i = 0; i < text.size();i++){
            if(current != ""){
                if(text[i] == '&'){
                    ans += current;
                    current = "&";
                }
                else {
                    current += text[i];
                    if(ent.find(current) != ent.end()){
                        ans += ent[current];
                        current = "";
                    }else if(current.size() == 7){
                        ans += current;
                        current = "";
                    }else if(i == text.size()-1){
                        ans += current;
                    }
                }
            }else {
                if(text[i] == '&'){
                    current += text[i];
                }else{
                    ans += text[i]; 
                }
            }
        }
        if(text[text.size()-1] == '&') ans+= "&";
        return ans;
    }
};