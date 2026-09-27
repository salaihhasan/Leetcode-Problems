class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string curr = "";

        for (char c : s) {

            if (c == '(') {
                // Current string ko save karo
                st.push(curr);
                curr = "";
            }

            else if (c == ')') {
                // Current substring reverse karo
                reverse(curr.begin(), curr.end());

                // Bahar wali string ke saath jod do
                curr = st.top() + curr;
                st.pop();
            }

            else {
                // Normal character
                curr += c;
            }
        }

        return curr;
    }
};