class Solution {
public:
    int helper(int n){
        int count = 0;
        while(n>0){
            count++;
            n = n & (n-1);
        }return count;
    }
    int hammingWeight(int n) {
        //int ans = __builtin_popcount(n);
        int ans =  helper(n);
        return ans;
    }
};