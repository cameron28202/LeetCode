bool helper(TreeNode* root, int val){
        if(root == nullptr){
            return true;
        }
        if(root->val != val){
            return false;
        }
        return helper(root->left, val) && helper(root->right, val);
    }
bool isUnivalTree(TreeNode* root){
    if(root == nullptr){
        return true;
    }
    return helper(root, root->val);
}