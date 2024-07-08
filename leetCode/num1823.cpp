class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> Q;
        for(int i=1; i<=n; i++)Q.push(i);
        int cnt = 0;
        while(Q.size()>1){
            int a = Q.front();
            Q.pop();
            cnt++;
            if(cnt!=k)Q.push(a);
            else cnt =0;
        }
        return Q.front();
    }
};