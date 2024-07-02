void helper(TreeNode* node, string path, vector<string>& result){
        if(node == nullptr){
            return;
        }
        path += to_string(node->val);
        if(node->left == nullptr && node->right == nullptr){
            result.push_back(path);
        }
        else{
            helper(node->left, path + "->", result);
            helper(node->right, path + "->", result);
        }
    }
vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        helper(root, "", result);
        return result;
}