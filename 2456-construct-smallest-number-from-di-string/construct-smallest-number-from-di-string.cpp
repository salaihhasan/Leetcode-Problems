class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        stack<char>st;
        string ans;
        int count = 1;

        for(int i = 0; i < pattern.size();i++){
            st.push(count++ + '0');

            if(pattern[i] == 'I'){
                while(st.size() > 0) {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
            
        }
        st.push(count++ + '0');
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};