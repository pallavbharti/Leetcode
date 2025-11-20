class Solution {
public:
    void mySwap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while(mid <= high) {

            if(nums[mid] == 2) {
                mySwap(nums[mid], nums[high]);
                high--;
            }
            else if(nums[mid] == 0) {
                mySwap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else {
                mid++;  // nums[mid] == 1
            }
        }
    }
};
