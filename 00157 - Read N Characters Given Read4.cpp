class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {
        int total = 0;
        while (total < n) {
            int cur = read4(buf + total);
            total += cur;
            if (cur < 4) {
                break;
            }
        }
        return min(total, n);
    }
};