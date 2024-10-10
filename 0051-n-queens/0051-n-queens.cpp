#define pb push_back

class Solution {
private:
    vector<vector<string>> ans;
public:
    bool isatack(int x,int col,vector<string> s){
        int r =x;
        int c = col;
        while ( x >= 0 && col >= 0 ){       
            if(s[x][col]=='Q')  return true;
            x--;
            col--;      
        }
        x= r;
        col=c;
        while ( x <  s.size() && col >= 0 ){
            if(s[x][col]=='Q') return true;
            x++;
            col--;
        }
        x= r;
        col=c; 
        while( col >= 0 ){
            if (s[x][col]=='Q') return true;
            col--;
        }  
        return false;
    }
    void solve(int col,vector<string> s, int n){
        if(col == n){
            ans.pb(s);
            return;
        }
        
        for(int i = 0 ; i < n;i++){
            if(!isatack(i,col,s)){
                s[i][col] = 'Q';
                solve(col+1,s,n);
                s[i][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> s ( n , string (n,'.') );
        solve(0,s,n);
        return ans;
    }
};