class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(root, res);
        return res;
    }
    
    void helper(TreeNode* root, vector<int>& res) {
        if (!root) {
            return;
        }
        helper(root->left, res);
        res.push_back(root->val);
        helper(root->right, res);
    }
};

class Solution {
public:
     vector<int> inorderTraversal(TreeNode* root) {
         vector<int> res;
         stack<TreeNode*> s;
         while (root || !s.empty()) {
             if (root) {
                 s.push(root);
                 root = root->left;
             } else {
                 root = s.top();
                 s.pop();
                 res.push_back(root->val);
                 root = root->right;
             }
         }
         return res;
     }
};