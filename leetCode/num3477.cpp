class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        int ans =0;
        for(int i=0; i<n; i++){
            bool check = false;
            for(int j=0; j<n; j++){
                if(baskets[j]==-1)continue;
                if(baskets[j]>=fruits[i]){
                    check = true;
                    baskets[j]=-1;
                    break;
                }
            }
            if(!check)ans++;
        }
        return ans;
    }
};