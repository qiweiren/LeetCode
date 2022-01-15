class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int minPro = INT_MAX;
        for (int price : prices) {
            minPro = min(minPro, price);
            res = max(res, price - minPro);
        }
        
        return res;
    }
};