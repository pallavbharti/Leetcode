class Solution {
public:
    int height(TreeNode* root){
        if(!root) return 0;
        int lhs = height(root->left);
        int rhs = height(root->right);
        return 1 + max(lhs,rhs);

    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int lhs = height(root->left);
        int rhs = height(root->right);
        if(abs(lhs-rhs)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);

    }
};