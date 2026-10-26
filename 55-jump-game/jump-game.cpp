class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxId = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > maxId) return false;
            maxId = max(maxId, i+nums[i]);
        }
        return true;
    }
};