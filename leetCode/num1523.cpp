class Solution {
public:
    int countOdds(int low, int high) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int count =0;
        for(int i=low; i<=high; i++)if(i%2!=0)count++;
        return count;
    }
};