class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0], sum  = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            sum = std::max(nums[i], sum + nums[i]);
            max = std::max(sum, max);
        }
        
        return max;
    }
};