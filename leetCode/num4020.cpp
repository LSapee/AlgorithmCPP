class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans =0;
        int cur =0;
        for(int i=0; i<requests.size(); i++){
            ans += abs(requests[i]-cur);
            cur = requests[i];
        }
        return ans;
    }
};