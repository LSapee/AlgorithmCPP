class Solution {
public:
    int minPartitions(string n) {
        int m = n.size();
        int ans =0;
        for(int i=0; i<m; i++){
            if(n[i]-'0'>ans)ans = n[i]-'0';
            if(ans==9)break;
        }
        return ans;
    }
};