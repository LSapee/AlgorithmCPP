class Solution {
public:
    int lateFee(vector<int>& daysLate) {
        int ans =0; 
        int n =daysLate.size();
        for(int i=0; i<n; i++)ans += daysLate[i] == 1 ? 1 : daysLate[i] <= 5 ? daysLate[i]*2  :daysLate[i]*3;
        return ans;
    }
};