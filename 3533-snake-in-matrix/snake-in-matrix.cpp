class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k <commands.size();k++){
                    if(commands[k] == "RIGHT"){
                        j++;
                    }
                    else if(commands[k] == "LEFT"){
                        j--;
                    }
                    else if(commands[k] == "DOWN"){
                        i++;
                    }
                    else{i--;}
                }
                return (i * n) + j;
            }
        }
        return 0;
    }
};