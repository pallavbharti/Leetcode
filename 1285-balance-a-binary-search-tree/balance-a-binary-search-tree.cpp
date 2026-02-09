class Solution {
public:
    void inorder(TreeNode* root, vector<TreeNode*>& v) {
        if (!root) return;
        inorder(root->left, v);
        v.push_back(root);
        inorder(root->right, v);
    }

    TreeNode* build(int l, int r, vector<TreeNode*>& v) {
        if (l > r) return nullptr;
        int m = (l + r) / 2;
        TreeNode* root = v[m];
        root->left = build(l, m - 1, v);
        root->right = build(m + 1, r, v);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> v;
        inorder(root, v);
        return build(0, v.size() - 1, v);
    }
};
