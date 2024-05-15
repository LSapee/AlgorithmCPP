#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int W,H,N,D,B;
pair<int,int> st;
int bfs(vector<vector<int>> &arr){
    int cnt =1;
    arr[st.X][st.Y] = -1;
    queue<pair<int,int>> Q;
    Q.push(st);
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=1; i<=D; i++){
            for(int j=0; j<4; j++){
                int x=cur.X+(dx[j]*i);
                int y=cur.Y+(dy[j]*i);
                if(x<0||x>=W||y<0||y>=H)continue;
                if(arr[x][y]==-1)continue;
                arr[x][y] =-1;
                Q.push({x,y});
                cnt++;
            }
        }
    }
    return cnt;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(cin>>W>>H>>N>>D>>B){
        if(W==H&&N==H&&N==0)break;
        vector<vector<int>> arr(W,vector<int>(H,-1));
        for(int i=0; i<N; i++){
            int a,b;
            cin>>a>>b;
            a--;b--;
            if(B==i+1)st={a,b};
            arr[a][b]= 1;
        }
        int ans = bfs(arr);
        cout<<ans<<"\n";
    }

}