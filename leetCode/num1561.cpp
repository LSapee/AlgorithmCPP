class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        int ans =0;
        sort(piles.rbegin(),piles.rend());
        int p = 1;
        int k = 0;
        while(p<n-k){
            ans+=piles[p];
            p+=2;
            k++;
        }
        return ans;
    }
};
