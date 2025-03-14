class Solution {
public:
    bool canAllgiveCandies(vector<int>& candies, long long k, int mxCandies){
        long long mx =0;
        for(int i=0; i<candies.size(); i++){
            mx += candies[i]/mxCandies;
        }
        return mx>=k;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        //최대길이
        int mxCandie = 0;
        for(int i=0; i<candies.size(); i++) mxCandie = max(candies[i],mxCandie);
        int l =0;
        int r = mxCandie;
        while(l<r){
            int mid = (l+r+1)/2;
            if(canAllgiveCandies(candies,k,mid)){
                l = mid;
            }else {
                r = mid -1;
            }
        }
        return l;
    }
};