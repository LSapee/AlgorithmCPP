class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int arr[cost.size()+1];
        arr[0] = cost[0];
        arr[1] = cost[1];
        for(int i=2; i<cost.size();i++ ){
            arr[i] = min(arr[i-1]+cost[i],arr[i-2]+cost[i]);
        }
        return min(arr[cost.size()-1],arr[cost.size()-2]);
    }
};