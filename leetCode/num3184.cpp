class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int cnt =0;
        int n = hours.size();
        for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if((hours[i]+hours[j])%24==0)cnt++;
            }
        }
        return cnt;
    }
};