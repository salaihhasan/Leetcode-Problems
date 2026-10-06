class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(char ch : s){
            if(ch == ')' &&st.size()>0 && st.top() == '(') st.pop();
            else st.push(ch);
        }
        return st.size();
    }
};