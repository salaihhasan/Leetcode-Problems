class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int n = s.size();
        string ans;

        for(int i = 0; i < n;i++){
            if(s[i] == '('){
                if(st.empty()) st.push(s[i]);
                else {
                    st.push(s[i]);
                    ans += '(';
                }

            }

            else if(s[i] == ')'){
                if(st.size() == 1) st.pop();
                else{
                    st.pop();
                    ans += ')';
                }
            }
        }

        return ans;
    }
};