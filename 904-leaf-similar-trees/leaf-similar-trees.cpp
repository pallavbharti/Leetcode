void dfs(TreeNode* root,vector<int>&leaf){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL){
        leaf.push_back(root->val);
    }
    dfs(root->left,leaf);
    dfs(root->right,leaf);
}
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a,b;
        dfs(root1,a);
        dfs(root2,b);
        if(a==b)return true;
        else return false;
    }
};