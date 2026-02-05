class Solution {
public:
    int f(vector<int>& nums, int i, int currentSum, int target, vector<vector<int>>& dp){
    int n = nums.size();
    if(i == n) return (currentSum == target);

    int idx = currentSum + 1000;          //  offset
    if(dp[i][idx] != -1) return dp[i][idx];

    int ways = f(nums, i+1, currentSum + nums[i], target, dp)
             + f(nums, i+1, currentSum - nums[i], target, dp);

    return dp[i][idx] = ways;             //  store with offset
}

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(2001, -1));
        return f(nums,0,0,target,dp);
    }
};