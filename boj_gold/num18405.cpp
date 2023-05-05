#include <bits/stdc++.h>
#define X first
#define Y second
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    vector<vector<pair<int,int>>> A(m);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int k;cin>>k;
            if(k>0) A[k-1].push_back({i,j});
            arr[i][j]=k;
        }
    }
    int s,x,y;cin>>s>>x>>y;

    queue<pair<int,int>> Q;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[i].size(); j++){
            Q.push({A[i][j]});
        }
    }
    while(s>0){
        int k=0;
        int si = Q.size();
        while(!Q.empty() && k<si){
            pair<int,int> cur =Q.front(); Q.pop();
            k++;
            for(int i=0; i<4; i++){
                int xi = cur.X+dx[i];
                int yi = cur.Y+dy[i];
                if(xi<0||xi>=n||yi<0||yi>=n)continue;
                if(arr[xi][yi]!=0)continue;
                arr[xi][yi] = arr[cur.X][cur.Y];
                Q.push({xi,yi});
            }
        }
        s--;
    }
    cout<<arr[x-1][y-1];
}