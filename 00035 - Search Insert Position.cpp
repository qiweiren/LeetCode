class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l + 1 < r) {
            int mid = l + (r - l ) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                l = mid;
            } else {
                r = mid;
            }
        }
        
        if (nums[l] >= target) {
            return l;
        } else if (nums[r] < target) {
            return r + 1;
        } else {
            return r;
        }
    }
};