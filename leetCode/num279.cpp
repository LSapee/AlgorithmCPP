class Solution {
public:
#define X first
#define Y second
    int numSquares(int n) {
        vector<int> arr;
        for(int i=1; i<=sqrt(n); i++)arr.push_back(i*i);
        queue<pair<int,int>> Q;
        Q.push({n,0});
        while(!Q.empty()){
            pair<int,int> cur = Q.front(); Q.pop();
            for(int i=0; i<arr.size(); i++){
                int x= cur.X-arr[i];
                int y = cur.Y+1;
                if(x<0)continue;
                if(x==0) return y;
                Q.push({x,y});
            }
        }
        return 0;
    }
};