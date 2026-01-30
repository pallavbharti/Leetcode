class Solution {
public:
    int f(vector<int>& coins, int amount, vector<int>& dp){
        if(amount == 0) return 0;
        if(dp[amount] != -1) return dp[amount];

        int ans = INT_MAX;
        for(int i = 0; i < coins.size(); i++){
            if(amount - coins[i] < 0) continue;
            ans = min(ans, f(coins, amount - coins[i], dp));
        }

        if(ans == INT_MAX) return dp[amount] = INT_MAX;
        return dp[amount] = ans + 1;
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -1);
        int ans = f(coins, amount, dp);
        return (ans == INT_MAX) ? -1 : ans;
    }
};
