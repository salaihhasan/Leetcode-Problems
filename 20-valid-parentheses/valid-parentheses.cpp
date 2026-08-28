class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0) return false;
        stack<char> stack;
        int size = s.size();
        int size1 = stack.size();
        stack.push(s[0]);
        int i = 1;

        while(i < s.size()){
            if(!stack.empty() && 
            (
                (stack.top() == '(' && s[i] == ')') ||
                (stack.top() == '{' && s[i] == '}') ||
                (stack.top() == '[' && s[i] == ']')

            )) stack.pop();

            else{
                stack.push(s[i]);
            }

            i++;
        }
        return stack.size() == 0;

    }
};