
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1}
        };
        
        int res = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (map[s[i]] < map[s[i + 1]]) {
                res -= map[s[i]];
            } else {
                res += map[s[i]];
            }
        }
        
        // handle the last char in the string
        return res + map[s.back()];
    }
};



class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        int prev = 0;
        
        for (int i = 0; i < s.size(); i++) {
            char cur = s[i];
            int pos = 0;
            
            switch(cur) {
                case 'I': pos = 1; break;
                case 'V': pos = 5; break;
                case 'X': pos = 10; break;
                case 'L': pos = 50; break;
                case 'C': pos = 100; break;
                case 'D': pos = 500; break;
                case 'M': pos = 1000; break;
                default: return 0;
            }
            
            res += pos;
            if (prev < pos) {
                res -= 2 * prev;
            }
            
            prev = pos;
        }
        
        return res;
    }
};