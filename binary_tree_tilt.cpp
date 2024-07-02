int findTiltUtil(TreeNode* node, int& totalTilt) {
    if (node == nullptr) {
        return 0;
    }

    int leftSum = findTiltUtil(node->left, totalTilt);
    int rightSum = findTiltUtil(node->right, totalTilt);

    int tilt = abs(leftSum - rightSum);
    totalTilt += tilt;

    return leftSum + rightSum + node->val;
}

int findTilt(TreeNode* root) {
    int totalTilt = 0;
    findTiltUtil(root, totalTilt);
    return totalTilt;
}