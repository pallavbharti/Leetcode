class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        sort(begin(nums),end(nums));
        int L=1;
        int i=0;
        int j=0;
        int mx = nums[0];
        int mn = nums[0];
        while(j<n){
            mx = nums[j];
            mn = nums[i];
            while(i<j && mx>(long long)k*mn){
                i++;
                mn = nums[i];
            }
            L = max(L,j-i+1);
            j++;
        }return n-L;
    }
};