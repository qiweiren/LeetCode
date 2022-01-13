class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return false;
        }
        int newTargetSum = targetSum - root->val;
        if (root->left == NULL && root->right == NULL) {
            return newTargetSum == 0;
        } else {
            return hasPathSum(root->left, newTargetSum) || hasPathSum(root->right, newTargetSum);
        }
    }
};


class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return false;
        }
        
        stack<pair<TreeNode*, int>> stack;
        stack.push({root, root->val});
        while (!stack.empty()) {
            TreeNode* current = stack.top().first;
            int sum = stack.top().second;
            stack.pop();
            if (current->right) {
                stack.push({current->right, sum + current->right->val});
            }
            if (current->left) {
                stack.push({current->left, sum + current->left->val});
            }
            if (!current->left && !current->right && sum == targetSum) {
                return true;
            }
        }
        
        return false;
    }
};