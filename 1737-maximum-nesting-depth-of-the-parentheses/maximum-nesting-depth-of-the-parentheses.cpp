class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int x = 0;

        for(char ch : s){
            if(ch == '('){
                st.push(ch);
                x = max(x, (int) st.size());
            }

           else if (ch == ')') {
                if (!st.empty()) {
                    st.pop();
                }
           }
        }
        return x;
    }
};