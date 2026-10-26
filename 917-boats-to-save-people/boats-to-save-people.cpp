class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i = 0;
        int l = people.size()-1;
        int count = 0;

        while(i <= l){
            if(people[i] + people[l] <= limit) i++;
            l--;
            count++;
        }
        return count;
    }
};