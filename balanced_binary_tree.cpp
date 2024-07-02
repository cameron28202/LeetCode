bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        if(getHeight(root) == -1){
            return false;
        }
        return true;
    }
int getHeight(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    int leftDepth = getHeight(root->left);
    int rightDepth = getHeight(root->right);
    if(leftDepth == -1 || rightDepth == -1 || abs(leftDepth - rightDepth) > 1){
        return -1;
    }
    return 1 + std::max(leftDepth, rightDepth);
}