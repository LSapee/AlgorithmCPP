class Solution {
public:
    int dx[4] = {0,0,1,1};
    int dy[4] = {0,1,0,1};
    int maximumLength(vector<int>& nums) {
        int ans =0;
        for(int i=0; i<4; i++){
            int cnt = 0;
            for(int a : nums){
                int k =cnt%2;
                if(k == 0 && a%2 == dx[i])cnt++;
                else if(k==1 && a%2 == dy[i])cnt++;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};