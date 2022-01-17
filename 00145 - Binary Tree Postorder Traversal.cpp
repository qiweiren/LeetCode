class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode *cur = root, *prev;
        while(cur || !s.empty()) {
            while (cur) {
                s.push(cur);
                cur = cur->left;
            }

            if (s.top()->right && s.top()->right != prev) {
                cur = s.top()->right;
            } else {
                prev = s.top();
                res.push_back(prev->val);
                s.pop();
            }
        }
        
        return res;
    }
};


class Solution{
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(root, res);
        return res;
    }
    
private:
    void helper(TreeNode* root, vector<int>& res) {
        if (root) {
            helper(root->left, res);
            helper(root->right, res);
            res.push_back(root->val);
        }
    }
};