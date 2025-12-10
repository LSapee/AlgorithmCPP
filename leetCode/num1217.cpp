class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n = position.size();
        vector<long long> arr(2,0);
        for(int i=0; i<n; i++){
            if(position[i]%2==0)arr[0]++;
            else arr[1]++;
        }
        return min(arr[0],arr[1]);
    }
};