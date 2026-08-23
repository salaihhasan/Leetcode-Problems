class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int firstSum = 0,secondSum = 0;
        int x = 0, y = 0;

        for( int i = 0; i < n/2; i++){
            if(num[i] == '?') x += 1;
            else firstSum += num[i] - '0';
        }

        for( int i = n/2; i < n; i++){
            if(num[i] == '?') y += 1;
            else secondSum += num[i] - '0';
        }

        int diff = firstSum - secondSum;
        int diff2 = y-x;

        if(diff2 % 2 != 0) return true;
        
        diff2 = (diff2/2) * 9;


        return diff2 != diff;
    }
};