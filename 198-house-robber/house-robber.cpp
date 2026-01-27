class Solution {
public:
    int f(vector<int>& nums,int i,int n,vector<int>&dp){
        // Basecase:
        //if(i>n-1) return 0;
        if(i==n-1) return nums[i];
        if(i==n-2) return max(nums[i],nums[i+1]);
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+f(nums,i+2,n,dp) , f(nums,i+1,n,dp));

    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return f(nums,0,n,dp);
    }
};