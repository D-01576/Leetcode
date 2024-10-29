class Solution {
public:
    vector<vector<int>>dp;
    int n;
    int m;
    int recursion(int ith,int jth,vector<vector<int>>& grid){
        if(jth==m-1) return 0;
        if(dp[ith][jth]!=-1) return dp[ith][jth];
        int count1=0,count2=0,count3=0;
        if(ith>0 && jth+1<m){
            if(grid[ith-1][jth+1]>grid[ith][jth]){
                count1=1+recursion(ith-1,jth+1,grid);
            }
        }
        if(jth+1<m){
            if(grid[ith][jth+1]>grid[ith][jth]){
                count2=1+recursion(ith,jth+1,grid);
            }
        }
        if(ith+1<n && jth+1<m){
            if(grid[ith+1][jth+1]>grid[ith][jth]){
                count3=1+recursion(ith+1,jth+1,grid);
            }
        }
        return dp[ith][jth]=max(count1,max(count2,count3));
    }
    int maxMoves(vector<vector<int>>& grid) {
        int maxcount=0;
        n=grid.size();
        m=grid[0].size();
        dp.resize(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            int count=recursion(i,0,grid);
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};