
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        
        int res = 1;
        for (int i = 1; i < n; i++) {
            if (nums[res - 1] != nums[i]) {
                nums[res++] = nums[i];
            }
        }

        return res;
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) {
            return n;
        }
        
        vector<int> tmp;
        tmp.push_back(nums[0]);
        for (int i = 1; i < n; i++) {
            if (nums[i] != tmp.back()) {
                tmp.push_back(nums[i]);
            }
        }
        
        for (int i = 0; i < tmp.size(); i++) {
            nums[i] = tmp[i];
        }
        
        return tmp.size();
    }
};