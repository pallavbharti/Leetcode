class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i =0 ,j =0 ,flips =0 , len =0 , maxlen = INT_MIN;
        while(j<n){
            // step 1 :
            if(nums[j]==1) j++;
            else{      // nums[j]==0
                if(flips < k){
                    flips++;
                    j++;
                }else{       //as no. of flips == k
                    len = j-i;
                    maxlen = max(maxlen,len);
                    // aab i ko next zero ke just aage le aao : 
                    while(nums[i]!=0) i++;
                    i++;
                    j++;
                }
            }
        }
        len = j-i;
        maxlen = max(maxlen,len);
        return maxlen;
    }
};