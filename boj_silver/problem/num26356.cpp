#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] ={1,2,2,1,-1,-2,-2,-1};
int dy[8] ={2,1,-1,-2,-2,-1,1,2};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    for(int i=0; i<n; i++){
        int p; cin>>p;
        int arr[p+1][p+1];
        fill(arr[0],arr[p+1],-1);
        int k,k1; cin>>k>>k1;
        int end1,end2;cin>>end1>>end2;
        queue<pair<int,int>> Q;
        arr[k][k1] =0;
        Q.push({k,k1});
        while(!Q.empty()){
            pair<int,int> cur = Q.front(); Q.pop();
            for(int z =0; z<8; z++){
                int x = dx[z]+cur.X;
                int y = dy[z]+cur.Y;
                if(x<=0||x>p||y<=0||y>p)continue;
                if(arr[x][y]!=-1)continue;
                arr[x][y] = arr[cur.X][cur.Y]+1;
                Q.push({x,y});
            }
        }
        cout<<"Case #"<<i+1<<": "<<arr[end1][end2]<<"\n";
        cout<<"\n";
    }
}