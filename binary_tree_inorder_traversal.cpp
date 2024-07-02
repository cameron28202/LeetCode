void helper(TreeNode* root, vector<int>& list){
        if(root == nullptr){
            return;
        }
        helper(root->left, list);
        helper(root->right, list);
        list.push_back(root->val);
    }
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> list;
    helper(root, list);
    return list;
}