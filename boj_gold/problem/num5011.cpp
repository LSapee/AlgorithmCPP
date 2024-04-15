#include <bits/stdc++.h>
#define X first
#define Y second
#define MOD INT_MAX
#define ll long long
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] ={1,0,-1,0};

int n;
bool bfs(vector<string> arr){
    if(arr[0][0]=='#')return false;
    queue<pair<int,int>> Q;
    Q.push({0,0});
    arr[0][0]='x';
    while(!Q.empty()){
        pair<int,int> cur =Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x= dx[i]+cur.X;
            int y= dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=n)continue;
            if(arr[x][y]=='#'||arr[x][y]=='x')continue;
            arr[x][y]='x';
            Q.push({x,y});
        }
    }
    if(arr[n-1][n-1]=='x')return true;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    vector<vector<ll>> ans(n,vector<ll>(n,0));
    vector<string> arr;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    if(arr[0][0]=='.') ans[0][0]=1;
    for(int i=1; i<n; i++){
        if(arr[i][0]=='.')ans[i][0] = ans[i-1][0];
    }
    for(int i=1; i<n; i++){
        if(arr[0][i]=='.')ans[0][i] = ans[0][i-1];
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            if(arr[i][j]=='.')ans[i][j] = (ans[i-1][j]+ans[i][j-1])%MOD;
        }
    }
    bool gs = bfs(arr);
    if(ans[n-1][n-1]==0){
        if(gs){
            cout<<"THE GAME IS A LIE";
        }else{
            cout<<"INCONCEIVABLE";
        }
    }else{
        cout<<ans[n-1][n-1];
    }
}

