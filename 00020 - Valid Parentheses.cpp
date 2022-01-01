class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto c : s) {
            if (!isParenthese(c)) return false;
            
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty() ||
                    (st.top() == '(' && c != ')') ||
                    (st.top() == '[' && c != ']') ||
                    (st.top() == '{' && c != '}')) {
                    return false;
                }
                st.pop();
            }
        }
        
        return st.empty();
    }
    
    bool isParenthese(char c) {
        string s = "()[]{}";
        return s.find(c) < s.length();
    }
};