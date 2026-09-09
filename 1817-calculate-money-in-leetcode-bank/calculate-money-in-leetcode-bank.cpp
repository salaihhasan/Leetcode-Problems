class Solution {
public:
    int totalMoney(int n) {
        int mon = 0;
        int balance = 0;
        int day = 0;

        while(n--){
            if( day % 7 == 0){
                mon++;
                day = 0;
            }

            balance += mon + day;
            day++;
        }
        return balance;
    }
};