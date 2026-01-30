class Solution {
public:
    const int mod = 1e9 + 7;
    int f(int n, int k, int target,vector<vector<int>>&dp){
        if(n==0 && target!=0)return 0;
        if(n==0 && target==0)return 1;
        if(dp[n][target]!=-1)return dp[n][target];
        int ans=0;
        for(int face=1; face<=k ;face++){
            if(target-face<0)continue;
            ans =(ans += f(n-1, k, target-face, dp)) % mod;
        }
        return dp[n][target]=ans;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        int ans =f(n,k,target,dp);
        return ans;
    }
};