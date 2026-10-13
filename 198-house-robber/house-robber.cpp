class Solution {
public:
    // int loot(int idx,vector<int>&nums,vector<int>&dp){
    //     if(idx >= nums.size()) return 0;
    //     if(dp[idx] != -1) return dp[idx];
    //     int pick = nums[idx] + loot(idx+2,nums,dp);
    //     int skip = loot(idx+1,nums,dp);
    //     return dp[idx] = max(skip,pick);
    // }

    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),0);
        int n = nums.size();
        dp[0] = nums[0];
         if(n>1) dp[1] = max(nums[1],nums[0]);
        for(int i = 2; i < nums.size();i++){
            dp[i] = max(dp[i-1],nums[i]+dp[i-2]);
        }
        return dp[n-1];
    }
};