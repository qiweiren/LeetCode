class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        int l = 1, r = x / 2;
        
        while (l + 1 < r) {
            int m = l + (r - l) / 2;
            if (m == x / m && x % m == 0) {
                return m;
            } else if (m <= x / m) {
                l = m; 
            } else {
                r = m;
            }
        }
        
        if (r <= x / r) {
            return r;
        } else {
            return l;
        }
    }
};