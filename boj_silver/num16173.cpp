#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int arr[3][3];
bool ok[3][3];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    queue<pair<int,int>> Q;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    Q.push({0,0});
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        int k =arr[cur.X][cur.Y];
        if(k>=3)continue;
        for(int i=0; i<2; i++){
            int x =cur.X;
            int y =cur.Y;
            if(i==0) x+=k;
            else y+=k;
            if(x>=n||y>=n)continue;
            if(ok[x][y])continue;
            if(arr[x][y]==-1){
                cout<<"HaruHaru";
                return 0;
            }
            ok[x][y] =true;
            Q.push({x,y});
        }
    }
    cout<<"Hing";
    return 0;

}