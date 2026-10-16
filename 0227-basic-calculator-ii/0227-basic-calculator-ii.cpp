class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int num = 0;
        char op = '+';
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            if ((!isdigit(ch) && ch != ' ') || i == s.size() - 1) {
                if (op == '+') {
                    st.push(num);
                }
                if (op == '-') {
                    st.push(-num);
                }
                if (op == '*') {
                    int a = st.top();
                    st.pop();
                    st.push(a * num);
                }
                if (op == '/') {
                    int a = st.top();
                    st.pop();
                    st.push(a / num);
                }
                op = ch;
                num = 0;
            }
        }
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};