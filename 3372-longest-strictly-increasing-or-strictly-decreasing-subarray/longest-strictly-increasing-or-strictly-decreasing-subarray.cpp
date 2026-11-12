class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incMax = 1;
        int decMax = 1;
        for(int i = 0; i < nums.size();i++){
            for(int j = i+1; j < nums.size();j++){
                if(nums[j] <= nums[j-1]){ 
                    break;
                }
                incMax = max(incMax,j-i+1);
            }

            for(int j = i+1; j < nums.size();j++){
                if(nums[j] >= nums[j-1]){
                    break;
                }
                decMax = max(decMax,j-i+1);
            }
        }
        return max(incMax,decMax);
    }
};