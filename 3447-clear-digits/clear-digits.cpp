class Solution {
public:
    bool hasNumber(char str){
        return str >= '0' && str <= '9';
    }

    string clearDigits(string s) {
        stack<char>st;
        for(int i = s.size()-1; i >= 0; i-- ){
            if(!hasNumber(s[i]) && st.size() > 0 && hasNumber(st.top())){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        string z = "";
        if(st.size() == 0) return "";
        else{
            while(st.size() > 0){
               z += st.top();
                st.pop();
            }
            return z;
        }   
    }
};