class Solution {
public:
    int num = 0;
    int reverseDegree(string s) {
        for(int i = 0; i < s.size(); i++){
            num += ((i+1)*('z' - s[i] + 1));
        }
        return num;

    }

    
};