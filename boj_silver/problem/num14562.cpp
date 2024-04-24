#include <bits/stdc++.h>
using namespace std;

struct ts{
    int S;
    int T;
    int cnt;
};
int dx[2] ={0,1};
int dy[2] ={3,0};
int n;

int bfs(int a,int b){
    queue<ts> Q;
    Q.push({a,b,0});

    while(!Q.empty()){
        ts cur = Q.front();Q.pop();
        dx[0] = cur.S;
        for(int i=0; i<2; i++){
            int x= dx[i]+cur.S;
            int y = dy[i]+cur.T;
            if(x>y)continue;
            if(x==y) return cur.cnt+1;
            Q.push({x,y,cur.cnt+1});
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--){
        int a,b;cin>>a>>b;
        int ans = bfs(a,b);
        cout<<ans<<"\n";
    }
}