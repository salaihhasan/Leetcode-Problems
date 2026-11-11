class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string>us;
        for(int i = 0; i < words.size(); i++){
            string s = "";
            for(int j = 0; j < words[i].size();j++){
                s += arr[(words[i][j] - 97)];
            }
            us.insert(s);
        }
        return us.size();
    }
};