class Solution {
public:
    string reversePrefix(string s, int k) {
        stack<int>st;
        string s1 = "";
        for(int i = 0; i < k; i++){
            st.push(s[i]);
        }
        for(int i = 0; i < s.size();i++){
            if(i < k){ s1 += st.top(); st.pop();}
            else s1 += s[i];
        }
        return s1;
    }
};