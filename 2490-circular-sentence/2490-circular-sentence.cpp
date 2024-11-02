class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> word;
        string current  = "";
        for(int i = 0 ; i < sentence.size();i++){
            if(sentence[i] == ' '){
                word.push_back(current);
                current = "";
            }else {
                current += sentence[i];
            }
        }
        if(!current.empty()){
            word.push_back(current);
        }
        for(int i = 0; i < word.size()-1;i++){
            if(word[i].back() != word[i+1].front()){
                return false;
            }
        }
        if(word.back().back() != word.front().front()) return false;
        return true;
    }
};