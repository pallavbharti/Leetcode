class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>ans(n);
        int low=0;
        int equal = 0;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot)low++;
            if(nums[i]==pivot)equal++;
        }
        int i=0;
        int j=low;
        int k=low+equal;
    for(int x=0;x<n;x++){
        if(nums[x]<pivot){
            ans[i]=nums[x];
            i++;
            }
        else if(nums[x]==pivot){
            ans[j]=nums[x];
            j++;
            }
        else {
        ans[k]=nums[x];
        k++;
        }
    }
    return ans;   
    }
};