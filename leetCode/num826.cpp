class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int ans =0;
        for(int i=0; i<worker.size(); i++){
            int money =0;
            for(int j=0; j<difficulty.size(); j++){
                if(worker[i]>= difficulty[j])money = max(money,profit[j]);
            }
            ans+=money;
        }
        return ans;
    }
};