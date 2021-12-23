class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        unordered_map<int, int> map;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int key = target - nums[i];
            if (map.find(key) != map.end())
            {
                res.push_back(i);
                res.push_back(map.find(key)->second);
                return res;
            }
            map.insert({nums[i], i});
        }
        return res;
    }
};