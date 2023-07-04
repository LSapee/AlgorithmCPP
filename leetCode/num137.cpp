class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        map<int,int> m;
        for(int num:nums){
            m[num]++;
        }
        for(int num:nums){
            if(m[num]==1) return num;
        }
        return 0;
    }
};