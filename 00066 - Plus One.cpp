class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() - 1;
        int carry = 1;
        while (carry > 0 || last >= 0) {
            if (last >= 0) {
                carry += digits[last];
                digits[last--] = carry % 10;
                carry /= 10;
            } else {
                digits.insert(digits.begin(), carry);
                carry = 0;
            }
        }
        return digits;
    }
};