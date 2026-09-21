class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>um;
        for(int i = 0; i < paths.size();i++){
            if(um.find(paths[i][0]) != um.end()){
                um[paths[i][0]]++;
            }
            else {
                 um[paths[i][0]] = 1;
            }
        }

        for(int i = 0; i < paths.size();i++){
            if(um.find(paths[i][1]) == um.end()){
                return paths[i][1];
            }
        }
        return "";


    
    }
};