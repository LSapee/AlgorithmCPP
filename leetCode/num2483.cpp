class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int penalty = 0;
        int closeTime = 0;
        for(int i=0; i<n; i++)if(customers[i]=='Y')penalty++;
        int minPenalty = penalty;
        for(int i=0; i<n; i++){
            if(customers[i]=='Y'){
                penalty--;
            }else{
                penalty++;
            }
            if(penalty < minPenalty){
                closeTime = i+1;
                minPenalty = penalty;
            }
        }
        return closeTime;
    }
};