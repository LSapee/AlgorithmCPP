class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int time =0;
        double sum = 0;
        for(int i=0; i<customers.size(); i++){
            if(time<customers[i][0]) time = customers[i][0];
            sum += (time + customers[i][1])-customers[i][0];
            time+= customers[i][1];
        }
        double ans = sum/customers.size();
        return ans;
    }
};