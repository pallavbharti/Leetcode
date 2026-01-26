class Solution {
public:
    int helper(vector<vector<int>>& obstacleGrid,int sr,int sc,int er,int ec,vector<vector<int>>&dp){
        if(sr>er || sc>ec) return 0;
        if(obstacleGrid[sr][sc]==1)return 0;
        if(sr==er && sc==ec) return 1;
        if(dp[sr][sc] != -1) return dp[sr][sc];
        return dp[sr][sc] = helper(obstacleGrid,sr,sc+1,er,ec,dp)+helper(obstacleGrid,sr+1,sc,er,ec,dp);
      
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n =obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return helper(obstacleGrid,0,0,m-1,n-1,dp);
    }
};