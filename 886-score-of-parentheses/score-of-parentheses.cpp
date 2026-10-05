class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        stack<int>st;
        for(char ch : s){
            if(ch == '('){
                st.push(score);
                score = 0;
            } 
            else {
                if(st.size() == 0){
                     st.push(score);
                }
                else{
                    int prev = st.top();
                    st.pop();
                    if(score == 0) score = 1;
                    else score *= 2;
                    score = prev + score;
                } 
            }
        }
        return score;
    }
};