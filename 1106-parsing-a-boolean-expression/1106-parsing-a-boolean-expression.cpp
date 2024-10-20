class Solution {
public:
    bool parseBoolExpr(string expression) {
        vector<char> com;
        vector<char> s;
        for(char c: expression){
            if(c == 't' || c == 'f' || c == '('){
                s.push_back(c);
            }else if(c == '!' || c == '&' || c == '|'){
                com.push_back(c);
            }else if(c == ')'){
                if(com.back() == '&'){
                    char ans = 't';
                    while(s.back() != '('){
                        if(s.back() == 'f'){
                            ans = 'f';
                        }
                        s.pop_back();
                    }
                    s.back() = ans;
                    com.pop_back();
                }else if(com.back() == '|'){
                    char ans = 'f';
                    while(s.back() != '('){
                        if(s.back() == 't'){
                            ans = 't';
                        }
                        s.pop_back();
                    }
                    s.back() = ans;
                    com.pop_back();
                }else{
                    com.pop_back();
                    char temp = s.back();
                    s.pop_back();
                    if(temp == 't'){
                        s.back() = 'f';
                    }else {
                        s.back() = 't';
                    }
                }
            }
        }
        if(s[0] == 't') return true;
        return false;
    }
};