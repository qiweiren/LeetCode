class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(root, res);
        return res;
    }
    
private:
    void helper(TreeNode* root, vector<int>& res) {
        if (root == NULL) return;
        res.push_back(root->val);
        helper(root->left, res);
        helper(root->right, res);
    }
};


class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == NULL) return res;
        
        stack<TreeNode*> s;
        s.push(root);
        
        while (!s.empty()) {
            TreeNode* cur = s.top();
            s.pop();
            res.push_back(cur->val);
            if (cur->right != NULL) s.push(cur->right);
            if (cur->left != NULL) s.push(cur->left);
        }
        
        return res;
    }
};