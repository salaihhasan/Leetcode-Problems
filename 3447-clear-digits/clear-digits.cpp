class Solution {
public:
    bool hasNumber(char str){
        return str >= '0' && str <= '9';
    }

    string clearDigits(string s) {
        stack<char>st;
        stack<char>st2;
        for(int i = 0; i < s.size(); i++ ){
            if(hasNumber(s[i]) && st.size() > 0) st.pop();
            else if(!hasNumber(s[i])) st.push(s[i]);
        }
        string z = "";
        if(st.size() == 0) return "";
        else{
            while(st.size() > 0){
                st2.push(st.top());
                st.pop();
            }
            while(st2.size() > 0){
               z += st2.top();
                st2.pop();
            }
            return z;
        }   
    }
};