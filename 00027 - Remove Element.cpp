class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, res = nums.size();
        while (i < res) {
            if (nums[i] == val) {
                nums[i] = nums[--res];
            } else {
                i++;
            }
        }
        return res;
    }
};


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        
        int i = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] != val) {
                nums[i++] = nums[j];
            }
        }
    
        return i;
    }
};