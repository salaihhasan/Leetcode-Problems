class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>um;
        int ans = 0;
        for(int i = 0; i < t.size();i++){
                um[t[i]] = i;
        }

        for(int i = 0; i < s.size();i++){
            ans += abs(um[s[i]] - i);
        }
        return ans;
    }
};