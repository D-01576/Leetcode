class Solution {
public:
    int maximumSwap(int num) {
        string n = to_string(num);
        
        for(int i = 0; i < n.size()-1;i++){
            int mx = 0;
            int mi = i;
            for(int j = i+1; j < n.size();j++){
                if(mx <= n[j]-'0'){
                    mx = n[j]-'0';
                    mi = j;
                }
            }
            if(n[i]-'0' < mx){
                char temp = n[i];
                n[i] = n[mi];
                n[mi] = temp;
                return stoi(n);
            }
        }
        return num;
    }
};
