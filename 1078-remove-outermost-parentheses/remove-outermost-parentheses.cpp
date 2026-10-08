class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans;

        for(char ch: s){
            if(ch == '('){
                if(st.size() == 0)st.push(ch);
                else {
                    st.push(ch);
                    ans += ch;
                }
            }
            else if(ch == ')'){
                if(st.size()== 1)st.pop();
                else{
                    st.pop();
                    ans+=ch;
                }
            }
        }
        return ans;

    }
};