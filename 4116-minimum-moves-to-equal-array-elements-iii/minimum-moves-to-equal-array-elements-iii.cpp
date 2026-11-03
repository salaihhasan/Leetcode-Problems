class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        int n = nums.size();
        for(int i = n-2; i >= 0; i--){
            sum += abs(nums[i] - nums[n-1]);
        }
        return sum;
    }
};