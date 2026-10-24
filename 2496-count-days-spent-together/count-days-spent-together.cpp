class Solution {
public:
    int CalculateDate(string z){
        int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int val = 0;
        for(int i = 0; i < stoi(z.substr(0, 2))-1; i++){
            val += months[i];
        }
        return val + stoi(z.substr(3, 2));
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int ArriveAlice = 0,LeaveAlice = 0,ArriveBob =0,LeaveBob =0;

        int start = max(CalculateDate(arriveAlice),CalculateDate(arriveBob));
        int end = min(CalculateDate(leaveAlice),CalculateDate(leaveBob));
        return max(0,end-start+1);
    }
};