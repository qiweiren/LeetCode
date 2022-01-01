class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0) {
            return "";
        }
        
        string res = "";
        sort(begin(strs), end(strs));
        string a = strs[0];
        string b = strs[n - 1];
        
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i]) {
                res += a[i];
            } else {
                return res;
            }
        }
        
        return res;
    }
};


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int n = strs.size();
        if (n == 0) {
            return res;
        }
        
        int min_size = INT_MAX;
        for (string str : strs) {
            if (str.length() < min_size) {
                min_size = str.length();
            }
        }
        
        int count = 0;
        while (count < min_size) {
            int i = 1;
            while (i < strs.size()) {
                if (strs[i][count] != strs[i - 1][count]) {
                    return res;
                }
                i++;
            }
            if (i == strs.size()) {
                res += strs[0][count];
            }
            
            count++;
        }
        
        return res;
    }
};