class Solution {
public:
    int f(vector<int>& nums, int target,vector<int>&dp){
        if(target==0)return 1;
        if(dp[target]!=-1) return dp[target];
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(target-nums[i]<0)continue;
            ans += f(nums,target-nums[i],dp);
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        int ans = f(nums,target,dp);
        return ans;
    }
};