class Solution {
public:
    int helper(vector<vector<int>>& grid,int sr , int sc , int er, int ec,vector<vector<int>>&dp){
        if(sr>er || sc>ec) return INT_MAX;
        if(sr==er && sc==ec) return grid[sr][sc];
        if(dp[sr][sc]!=-1) return dp[sr][sc];
        return dp[sr][sc] = grid[sr][sc] + min(helper(grid,sr,sc+1,er,ec,dp),helper(grid,sr+1,sc,er,ec,dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return helper(grid,0,0,m-1,n-1,dp);
    }
};