class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = s.size() - 1;
        while (last >= 0 && s[last] == ' ') {
            last--;
        }
        
        int res = 0;
        while (last >= 0 && s[last] != ' ') {
            res++;
            last--;
        }
        return res;
    }
};