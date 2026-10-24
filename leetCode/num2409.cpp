class Solution {
public:
    vector<int> month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int makeDays(int A){
        int m = 0;
        for(int i=0; i<A-1; i++) m+= month[i];
        return m;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int Ast = makeDays(stoi(arriveAlice.substr(0,2))) + stoi(arriveAlice.substr(3,2));
        int Aed = makeDays(stoi(leaveAlice.substr(0,2))) + stoi(leaveAlice.substr(3,2));
        int Bst = makeDays(stoi(arriveBob.substr(0,2))) + stoi(arriveBob.substr(3,2));
        int Bed = makeDays(stoi(leaveBob.substr(0,2))) + stoi(leaveBob.substr(3,2));
        return max(0,min(Aed,Bed)-max(Ast,Bst)+1);
    }
};