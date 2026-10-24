class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int ArriveAlice = 0,LeaveAlice = 0,ArriveBob =0,LeaveBob =0;

        for(int i = 0; i < stoi(arriveAlice.substr(0, 2))-1; i++){
            ArriveAlice += months[i];
        }
        ArriveAlice += stoi(arriveAlice.substr(3, 2));

        for(int i = 0; i < stoi(leaveAlice.substr(0, 2))-1; i++){
            LeaveAlice += months[i];
        }
        LeaveAlice += stoi(leaveAlice.substr(3, 2));

        for(int i = 0; i < stoi(arriveBob.substr(0, 2))-1; i++){
            ArriveBob += months[i];
        }
        ArriveBob += stoi(arriveBob.substr(3, 2));
        
        for(int i = 0; i < stoi(leaveBob.substr(0, 2))-1; i++){
            LeaveBob += months[i];
        }
        LeaveBob += stoi(leaveBob.substr(3, 2));

        int start = max(ArriveAlice,ArriveBob);
        int end = min(LeaveBob,LeaveAlice);
        return max(0,end-start+1);
    }
};