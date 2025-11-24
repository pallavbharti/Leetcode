class Solution {
public:
void helper(vector<int>& nums ,vector<vector<int>>&finalAns,vector<int>ans){
    if(nums.size()==0){
        finalAns.push_back(ans);
        return;
    }
    for(int i = 0 ; i < nums.size() ; i++){
        int ch = nums[i];
        vector<int>left(nums.begin(),nums.begin()+i);
        vector<int>right(nums.begin()+i+1,nums.end());
        vector<int> remaining = left;  
        for(int x : right) remaining.push_back(x);   // right ke elements add kar diye

        vector<int> newAns = ans;
        newAns.push_back(ch);

        helper(remaining, finalAns, newAns);

    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>finalAns;
        vector<int>ans;
        helper(nums,finalAns,ans);
        return finalAns;

    }
};