class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        } else if (p == NULL || q == NULL || p->val != q->val) {
            return false;
        }
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> queue;
        queue.push(p);
        queue.push(q);
        
        while(!queue.empty()) {
            TreeNode* curP = queue.front();
            queue.pop();
            TreeNode* curQ = queue.front();
            queue.pop();
            if (curP == NULL && curQ == NULL) {
                continue; 
            } else if (curP == NULL || curQ == NULL || curP->val != curQ->val) {
                return false;
            }
            queue.push(curP->left);
            queue.push(curQ->left);
            queue.push(curP->right);
            queue.push(curQ->right);
        }
        
        return true;
    }
};