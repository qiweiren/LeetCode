class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isSymmetric(root->left, root->right);
    }
    
    bool isSymmetric(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        } else if (p == NULL || q == NULL || p->val != q->val) {
            return false;
        }
        return isSymmetric(p->left, q->right) && isSymmetric(p->right, q->left);
    }
};


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isSymmetric(root->left, root->right);
    }
    
    bool isSymmetric(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> queue;
        queue.push(p);
        queue.push(q);
        
        while (!queue.empty()) {
            TreeNode* curp = queue.front();
            queue.pop();
            TreeNode* curq = queue.front();
            queue.pop();
            if (curp == NULL && curq == NULL) {
                continue;
            } else if (curp == NULL || curq == NULL || curp->val != curq->val) {
                return false;
            }
            queue.push(curp->left);
            queue.push(curq->right);
            queue.push(curp->right);
            queue.push(curq->left);
        }
        
        return true;
    }
};