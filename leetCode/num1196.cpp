class Solution {
public:
    int maxNumberOfApples(vector<int>& weight) {
        sort(weight.begin(),weight.end());
        int n = weight.size();
        int MAX = 5000;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(weight[i]<=MAX){
                MAX-=weight[i];
                ans++;
            }else break;
        }
        return ans;
    }
};