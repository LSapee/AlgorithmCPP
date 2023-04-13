#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[6] ={-2,-2,0,0,2,2};
int dy[6] ={-1,1,-2,2,-1,1};

int arr[201][201];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    fill(arr[0],arr[n],-1);
    queue<pair<int,int>> Q;
    int str,stc; cin>>str>>stc;
    int endr,endc; cin>>endr>>endc;
    Q.push({str,stc});
    arr[str][stc] = 0;

    while(!Q.empty()){
        pair<int,int> c =Q.front(); Q.pop();
        for(int i=0; i<6; i++){
            int x = c.X+dx[i];
            int y = c.Y+dy[i];
            if(x<0||x>=n||y<0||y>=n)continue;
            if(arr[x][y]!=-1)continue;
            arr[x][y] = arr[c.X][c.Y]+1;
            Q.push({x,y});
        }
    }
    cout<<arr[endr][endc];
}