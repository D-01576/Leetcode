class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0 ; i < command.size()-1;i++){
            if(command[i] == 'G'){
                ans += 'G';
            }else if(command[i] == '(' && command[i+1] == ')'){
                ans += 'o';
                i++;
            }else if(command[i] == '(' && command[i+1] != ')'){
                    ans += "al";
                    i += 3;
            }
        }
        if(command[command.size()-1] == 'G'){
            ans += 'G';
        }
        return ans;
    }
};