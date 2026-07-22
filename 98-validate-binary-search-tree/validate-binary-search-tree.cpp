class Solution {    //HINT : Inorder Traversal Of BST  is always in sorted order.
public:

    int flag = 0;

    void inorder(TreeNode* root,TreeNode* &prev){
        if(root==NULL) return;   // BASE CASE
        inorder(root->left,prev);  // LEFT
        if(prev==NULL)prev=root;
        else{
            if(prev->val >= root->val)flag=1;
        }
        
        prev = root;
        inorder(root->right,prev);  //RIGHT
    }    
    
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        inorder(root,prev);
        if(flag == 0)return true;
        else return false;
    }
};