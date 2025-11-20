class Solution {
public:
    void mySwap(int &a , int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int low =0;
        int high = n-1;
        while(low < high){
            if(nums[low] % 2 == 1 && nums[high] % 2 == 0){
                mySwap(nums[low],nums[high]);
                low++ ;
                high--;
            }
            if(nums[low]%2 == 0) low++;
            if(nums[high]%2 ==1) high--;
        }
        return nums;
    }
};