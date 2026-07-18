class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int stT = stoi(startTime.substr(0,2));
        int stM = stoi(startTime.substr(3,2));
        int stS = stoi(startTime.substr(6,2));
        int edT = stoi(endTime.substr(0,2));
        int edM = stoi(endTime.substr(3,2));
        int edS = stoi(endTime.substr(6,2));
        return (edT*3600+edM*60+edS) - (stT*3600+stM*60+stS);
    }
};