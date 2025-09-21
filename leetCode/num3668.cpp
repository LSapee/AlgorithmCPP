class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();
        int m = friends.size();
        vector<bool> arr(n+1,false);
        vector<int> ans;
        for(int i=0; i<m; i++) arr[friends[i]] = true;
        for(int i=0; i<n; i++) if(arr[order[i]])ans.push_back(order[i]);
        return ans;
    }
};