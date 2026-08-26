class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        for (int i = 0; i < word.size();i++){
            if(word[i] == ch){
                 st.push(word[i]);
                 break;
            }
            else st.push(word[i]);
            if(i == word.size() - 1) return word;
        }

        

        int j = 0;
        while(st.size() > 0){
            word[j] = st.top();
            st.pop();
            j++;
        }

        return word;
    }
};