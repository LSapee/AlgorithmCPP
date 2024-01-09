#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] = {1, 2,2,1,-1,-2,-2,-1};
int dy[8] = {2,1,-1,-2,-2,-1,1,2};
int arr[301][301];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
//    테스트 케이스
    for(int t=0; t<n; t++){
        int m;
//        한변의 길이 m
        cin>>m;
        fill(arr[0],arr[300],0);
//      나이트의 현재 위치
        int k,k1,z,z1;
        cin>>k>>k1>>z>>z1;
        arr[k][k1]=0;
        queue<pair<int,int>> Q;
        Q.push({k,k1});
        while(!Q.empty()){
            pair<int,int> cur = Q.front(); Q.pop();
            for(int nxt =0; nxt<8; nxt++){
                int x =cur.X+dx[nxt];
                int y =cur.Y+dy[nxt];
                if(x<0||x>=m||y<0||y>=m) continue;
                if(arr[x][y]>0)continue;
                if(x==z && y==z1) {
                    while(!Q.empty()){
                        Q.pop();
                    }
                    arr[x][y] = arr[cur.X][cur.Y]+1;
                    break;
                }
                arr[x][y] = arr[cur.X][cur.Y]+1;
                Q.push({x,y});
            }
        }
        if(k==z&&k1==z1){
            arr[z][z1] =0;
        }
        cout<<arr[z][z1]<<"\n";
    }
}