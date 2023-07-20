class Solution {
public:
    int arr[1000001];
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        for(int i=0; i<intervals.size(); i++){
            int st = intervals[i][0];
            int end = intervals[i][1];
            for(int j=st; j<end; j++){
                if(arr[j]>0) return false;
                arr[j]++;
            }
        }
        return true;
    }
};