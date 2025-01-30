class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int time =0;
        int nxt = 0;
        for(int i=0; i<timeSeries.size(); i++){
            if(nxt<timeSeries[i]){
                time+=duration;
                nxt = timeSeries[i]+duration;
            }else{
                time -= nxt - timeSeries[i];
                time+=duration;
                nxt = timeSeries[i]+duration;
            }
        }
        return time;
    }
};
//