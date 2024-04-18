#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n,m;
vector<string> arr;
vector<int> ans;

void bfs(int a,int b){
    queue<pair<int,int>> Q;
    arr[a][b]='0';
    Q.push({a,b});
    int cnt =1;
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]=='0')continue;
            cnt++;
            arr[x][y]='0';
            Q.push({x,y});
        }
    }
    ans.push_back(cnt);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        arr.push_back(s);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='1')bfs(i,j);
        }
    }
    if(ans.size()==1){
        cout<<1<<"\n";
        cout<<ans[0];
    }else{
        cout<<ans.size()<<"\n";
        sort(ans.begin(),ans.end());
        for(int i=0; i<ans.size()-1; i++)cout<<ans[i]<<" ";
        cout<<ans[ans.size()-1];
    }
    return 0;
}