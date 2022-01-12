class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return getHeight(root) == -1 ? false : true;
    }
private:
    int getHeight(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }
        int left = getHeight(node->left);
        int right = getHeight(node->right);
        if (left == -1 || right == -1 || abs(left - right) > 1) {
            return -1;
        }
        
        return max(left, right) + 1;
    }
};