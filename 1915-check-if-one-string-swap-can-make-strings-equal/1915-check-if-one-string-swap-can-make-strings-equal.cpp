class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        bool one = false;
        int n = s1.size();
        for(int i = 0; i < n;i++){
            if(s1[i] != s2[i]){
                if(one){
                    return false;
                }
                char wanted = s1[i];
                cout<<wanted<<endl;
                bool found = false;
                for(int j = 0; j < n;j++){
                    if(i!=j){
                        if(wanted == s2[j]){
                            cout<<"here"<<endl;
                            if(s2[j] != s1[j]){
                                cout<<"hello";
                                found = true;
                                int temp = s2[j];
                                s2[j] = s2[i];
                                s2[i] = temp;
                            }
                        }
                    }
                }
                if(!found){
                    return false;
                }
                one = true;
            }
        }
        return true;
    }
};