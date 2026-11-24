class Solution {
public:
    int gcd(int a,int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int lcm(int a, int b){
        return (a/gcd(a,b)) * b;
    }

    int maxLength(vector<int>& nums) {
        int maxLen = 0;
        for(int i = 0; i < nums.size(); i++){
            int prod = 1;
            int currgcd = nums[i];
            int currlcm = nums[i];
            for(int j = i; j < nums.size(); j++){
                if (prod > INT_MAX / nums[j]) break; 
                prod *= nums[j]; 
                currlcm = lcm(currlcm, nums[j]);
                currgcd = gcd(currgcd, nums[j]);

                if(prod == currlcm * currgcd){
                    maxLen = max(maxLen,j-i+1);
                }
            }
        }
        return maxLen;
    }
};