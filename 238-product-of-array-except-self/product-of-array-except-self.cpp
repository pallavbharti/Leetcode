class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> suf(n);
        
        
        // Prefix array product except self
        int p = nums[0];
        pre[0] = 1;
        for(int i = 1; i < n; i++){
            pre[i] = p;
            p *= nums[i];
        }
        // Suffix array product except self
        suf[n-1] = 1;
        p = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            suf[i] = p;
            p *= nums[i];
        }
        // Calculate final answer
        for(int i = 0; i < n; i++){
            pre[i] = pre[i] * suf[i];
        }
        return pre;
    }
};
