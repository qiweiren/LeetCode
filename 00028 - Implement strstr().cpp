class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length(), m = needle.length();
        if (m == 0) {
            return 0;
        }
        if (n == 0 || n < m) {
            return -1;
        }
        
        int d = 31;
        int q = 15486703;
        long p = 0, t = 0, h = 1;
        
        for (int i = 0; i < m; i++) {
            if (i != m - 1) {
                h = (d * h) % q;
            }
            p = (d * p + needle[i]) % q;
            t = (d * t + haystack[i]) % q;
        }
        
        for (int i = 0; i < n - m + 1; i++) {
            if (t < 0) t += q;
            if (p == t && needle == haystack.substr(i, m)) {
                return i;
            }
            if (i < n - m) {
                t = (d * (t - haystack[i] * h) + haystack[i + m]) % q;
            }
        }
        
        return -1;
    }
};