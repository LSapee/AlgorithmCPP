class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int maxAccount =-10000;
        for(int i=0; i<accounts.size(); i++){
            int sum=0;
            for(int j=0; j<accounts[i].size(); j++){
                sum+=accounts[i][j];
                cout<<sum;
            }
            maxAccount = max(maxAccount,sum);
        }
        return maxAccount;
    }
};