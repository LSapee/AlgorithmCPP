class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> sum(10001);
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        for(int num : nums) sum[num]+=num;
        int o=sum[1],t=0;
        for(int i= 2; i<10001; i++){
            int temp = max(t+sum[i],o);
            t=o,o=temp;
        }
        return o;
    }
};