class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        long sum = 0; int prod = 1;
        while(n != 0){
            int d = n % 10;
            sum += d;
            prod *= d ;

            n/=10;
        }

         return (m % (sum + prod)) == 0;
    }
};