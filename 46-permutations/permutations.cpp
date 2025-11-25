class Solution {    // TC = O(n *n!)
public:
void permuteHelper(int index, vector<int>& nums, vector<vector<int>>& ans) {

    // 1. Base case
    if(index == nums.size()) {
        ans.push_back(nums);
        return;
    }

    // 2. Loop for choices
    for(int i = index; i < nums.size(); i++) {

        swap(nums[index], nums[i]);          // CHOICE

        permuteHelper(index + 1, nums, ans); // EXPLORE

        swap(nums[index], nums[i]);          // UNDO
    }
}

    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    permuteHelper(0, nums, ans);
    return ans;
}

};