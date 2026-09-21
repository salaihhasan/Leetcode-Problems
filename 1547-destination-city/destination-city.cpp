class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>us;
        for(int i = 0; i < paths.size();i++){
                us.insert(paths[i][0]);
        }

        for(int i = 0; i < paths.size();i++){
            if(us.find(paths[i][1]) == us.end()){
                return paths[i][1];
            }
        }
        return "";


    
    }
};