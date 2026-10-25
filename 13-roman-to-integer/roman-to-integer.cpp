class Solution {
public:
    int romanToInt(string s) {
        int val = 0;
        unordered_map<char,int>um;
        um.insert({
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000}
        });

        int prev_val = 0;
        for(int i = s.size()-1; i >= 0;i--){
            int current_val = um[s[i]];
            if(current_val < prev_val){
                val -= current_val;
            }
            else val += current_val;
            prev_val = current_val;
        }
        return val;
    }
};