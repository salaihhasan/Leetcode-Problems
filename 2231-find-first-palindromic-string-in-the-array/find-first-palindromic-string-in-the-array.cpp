class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       for(int i = 0; i <words.size();i++){
        int l = 0;
        int h = words[i].size() - 1;
        while(l <= h){
            if(words[i][l] != words[i][h]) break;
                l++; 
                h-- ;
        }
        if(l >= h) return words[i];
       }
       return ""; 
    }
};