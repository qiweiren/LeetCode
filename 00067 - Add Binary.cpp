class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        string s = "";
        while (i >= 0 || j >= 0 || carry > 0) {
            carry += (i >= 0) ? a[i--] - '0' : 0;
            carry += (j >= 0) ? b[j--] - '0' : 0;
            s.insert(0, to_string(carry % 2));
            carry /= 2;
        }
        return s;
    }
};