class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;

        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;

        queue<TreeNode*> queue;
        queue.push(root);
        int res = 0;
        while (!queue.empty()) {
            int size = queue.size();
            res++;
            while (size-- > 0) {
                TreeNode* cur = queue.front();
                queue.pop();
                if (cur->left) queue.push(cur->left);
                if (cur->right) queue.push(cur->right);
            }
        }
        
        return res;
    }
};