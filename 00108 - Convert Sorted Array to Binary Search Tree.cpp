class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums, int left, int right) {
        if (left > right) {
            return NULL;
        }
        
        int mid = left + (right - left) / 2;
        TreeNode* cur = new TreeNode(nums[mid]);
        cur->left = sortedArrayToBST(nums, left, mid - 1);
        cur->right = sortedArrayToBST(nums, mid + 1, right);
        
        return cur;
    }
};