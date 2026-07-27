class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        std::map<char,char> p = {
            {')','('},
            {'}','{'},
            {']','['}
        };

        for (char c: s){
            if (p.contains(c)){
                if (st.empty() || st.top() != p[c] ) {
                    return false;
                } 
                st.pop();
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};
