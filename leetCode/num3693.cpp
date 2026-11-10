class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        if(n<3)costs.resize(3);
        costs[0] = 1 + costs[0];
        costs[1] = min(4+costs[1],costs[0]+1+costs[1]);
        costs[2] = min(min(costs[0]+4+costs[2],costs[1]+1+costs[2]),9+costs[2]);
        for(int i=3; i<n; i++) costs[i] = min(min(costs[i-2]+4+costs[i],costs[i-1]+1+costs[i]),costs[i-3]+9+costs[i]);
        return costs[n-1];
    }
};