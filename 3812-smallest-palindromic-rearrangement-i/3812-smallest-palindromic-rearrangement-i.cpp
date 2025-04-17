class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1) return s;
        unordered_map<char,int> ansTo;

        for(int i =0; i <  s.size();i++){
            ansTo[s[i]]++;
        };

        vector<pair<char,int>> vt(ansTo.begin(),ansTo.end());

        sort(vt.begin(),vt.end(), [](const pair<char, int>& a, const pair<char,int>& b){
            return a.first < b.first;
        });
        string answer = "";
        string middle = "";

        for(const auto som : vt){
            int th = som.second;
            if(th == 1){
                middle += som.first;
                continue;
            }
            
            if(som.second % 2 != 0){
                middle += som.first;
                // th--;
            }
            for(int i = 0; i <  th/2;i++){
                answer += som.first;
            }
        }
        int n = answer.size();
        answer += middle;
        for(int i = n-1; i >= 0;i--){
            answer += answer[i];
        }

        return answer;
    }
};