class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char temp;
        for (char c : s)  {
            if (c == '(' || c == '{' || c == '[' ){
                st.push(c);
            } else {
                if (st.empty()) return false;
                temp = st.top();
                if (c == ')' && temp != '('){
                    return false;
                } else if (c == ']' && temp != '['){
                    return false;
                } else if (c == '}' && temp != '{'){
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};