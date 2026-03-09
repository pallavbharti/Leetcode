class Solution {
public:
    int MOD = 1000000007;
    long long dp[201][201][2];

    long long solve(int z, int o, int last, int limit) {
        if(z == 0 && o == 0) return 1;

        if(dp[z][o][last] != -1) return dp[z][o][last];

        long long ans = 0;

        if(last == 0) {
            for(int i = 1; i <= limit && i <= o; i++) {
                ans = (ans + solve(z, o - i, 1, limit)) % MOD;
            }
        } 
        else {
            for(int i = 1; i <= limit && i <= z; i++) {
                ans = (ans + solve(z - i, o, 0, limit)) % MOD;
            }
        }

        return dp[z][o][last] = ans % MOD;
    }

    int numberOfStableArrays(int zero, int one, int limit) {
        memset(dp, -1, sizeof(dp));

        long long ans = 0;

        for(int i = 1; i <= limit && i <= zero; i++)
            ans = (ans + solve(zero - i, one, 0, limit)) % MOD;

        for(int i = 1; i <= limit && i <= one; i++)
            ans = (ans + solve(zero, one - i, 1, limit)) % MOD;

        return ans;
    }
};