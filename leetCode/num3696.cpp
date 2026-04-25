class Solution {
public:
    int maxDistance(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            int ed = n-1;
            while(ed>i){
                if(words[i]!= words[ed]){
                    ans = max(ans,ed-i+1);
                    break;
                }
                ed--;
            }
        }
        return ans;
    }
};