class Solution {
public:
    vector<int> preorderTra
        vector<int> res;
        helper(root, res);
        return res;
    }
    
private:
    void helper(TreeNode* r
        if (root == NULL) r
        res.push_back(root-
        helper(root->left, 
        helper(root->right,
    }
};
class Solution {
public:
    vector<int> preorderTra
        vector<int> res;
        if (root == NULL) r
        
        stack<TreeNode*> s;
        s.push(root);
        
        while (!s.empty()) 
            TreeNode* cur =
            s.pop();
            res.push_back(c
            if (cur->right 
            if (cur->left !
        }
        
        return res;
    }
};