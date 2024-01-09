#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    for(int i=0; i<n; i++){
        int h,w;cin>>h>>w;
        int count =0;
        string arr[h];
        for(int j=0; j<h; j++)cin>>arr[j];
        for(int j=0;j<h;j++){
            for(int k=0; k<w; k++){
                queue<pair<int,int>> Q;
                if(arr[j][k]=='#'){
                    Q.push({j,k});
                    arr[j][k] ='.';
                    count++;
                }
                while(!Q.empty()){
                    pair<int,int> cur = Q.front();Q.pop();
                    for(int z = 0; z<4; z++){
                        int x = dx[z]+cur.X;
                        int y = dy[z] + cur.Y;
                        if(x<0||x>=h||y<0||y>=w)continue;
                        if(arr[x][y]!='#')continue;
                        Q.push({x,y});
                        arr[x][y]='.';
                    }
                }
            }
        }
        cout<<count<<"\n";
    }
}
