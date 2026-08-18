class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>stack;
        int i = 0;
        while(i < operations.size()){
            if(operations[i] == "+") {
                int x1 = stack.top();
                stack.pop();
                int sum =  0;
                sum = x1 + stack.top();
                stack.push(x1);
                stack.push(sum);
            }

            else if(operations[i] == "C"){
                stack.pop();
            }

            else if(operations[i] == "D"){
                stack.push(stack.top()*2);
            }

            else{


                stack.push(stoi(operations[i]));
            }
            i++;
        }

    int tsum = 0;
        while(stack.size()>0){
            tsum += stack.top();
            stack.pop();
        }
        return tsum;
    }
};