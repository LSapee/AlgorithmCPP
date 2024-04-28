#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int n,m;
int stx=-1,sty=-1;
bool findA(string s){
    if(sty!=-1)return false;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A') {
            sty=i;
            return true;
        }
    }
    return false;
}

int bfs(vector<string> &arr){
    queue<pair<int,int>> Q;
    Q.push({stx,sty});
    int cnt=1;
    arr[stx][sty]='#';
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x=  dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]=='#')continue;
            cnt++;
            arr[x][y]='#';
            Q.push({x,y});
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin>>m>>n){
        if(n==0&&m==0)break;
        stx=-1,sty=-1;
        vector<string> arr;
        for(int i=0; i<n; i++){
            string s;cin>>s;
            if(findA(s))stx=i;
            arr.push_back(s);
        }
        int ans = bfs(arr);
        cout<<ans<<"\n";
    }

}
