class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] % 2 != 0) continue;
            else if(nums1[i] % 2 != 0){
                for(int j = 0; j < nums1.size(); j++){
                    if(i == j)continue;
                if(nums1[j] % 2 != 0) return false; }
            }
        }
        return true;
    }
};