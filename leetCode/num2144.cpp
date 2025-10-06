class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n =cost.size();
        int ans =0;
        sort(cost.rbegin(),cost.rend());
        for(int i=0; i<n; i+=3){
            ans+=cost[i];
            if(i+1<n)ans+=cost[i+1];
        }
        return ans;
    }
};