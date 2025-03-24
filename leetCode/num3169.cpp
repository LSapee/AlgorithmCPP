class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int n = meetings.size();
        auto cur = meetings[0];
        int ans = cur[0]-1;
        for(int i=1; i<n; i++){
            if(cur[1] <meetings[i][0]){
                ans+= (meetings[i][0]-cur[1])-1;
                cur = meetings[i];
            }else if(cur[1]>meetings[i][1]){
                continue;
            }else{
                cur = meetings[i];
            }
        }
        if(cur[1]<days) ans+= days-cur[1];
        return ans;
    }
};