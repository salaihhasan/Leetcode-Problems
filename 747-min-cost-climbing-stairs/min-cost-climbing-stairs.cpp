class Solution {
public:
    int costs(int idx,vector<int>&cost,vector<int>&dp){
        if(idx >= cost.size()) return 0;
        if(dp[idx] != -1) return dp[idx];
        int pick = cost[idx] + costs(idx+2,cost,dp);
        int skip = cost[idx] + costs(idx+1,cost,dp);
        return dp[idx] = min(skip,pick);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        return min(costs(0,cost,dp),costs(1,cost,dp));
    }
};