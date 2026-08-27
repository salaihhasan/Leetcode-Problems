class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            int countDigit = 0;
            while(nums[i] != 0){
                nums[i]/=10;
                countDigit += 1;
            }
            if(countDigit %2 == 0) count += 1;
        }
        return count;
    }
};