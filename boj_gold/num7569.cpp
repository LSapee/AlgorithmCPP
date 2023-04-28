#include <bits/stdc++.h>

using namespace std;

int dx[6] ={0,0,0,0,-1,1};
int dy[6] ={0,1,0,-1,0,0};
int dz[6] ={1,0,-1,0,0,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t;cin>>n>>m>>t;
    int arr[t][m][n];

    queue<tuple<int,int,int>> Q;
    for(int i=0;i<t;i++){
        for(int j=0; j<m; j++){
            for(int k =0; k<n; k++){
                int a; cin>>a;
                arr[i][j][k] =a;
                if(a==1){
                    Q.push({i,j,k});
                }
            }
        }
    }
    int day =1;
    while(!Q.empty()){
        tuple<int,int,int> tp = Q.front(); Q.pop();
        for(int i=0; i<6; i++){
            int x = get<0>(tp)+dx[i];
            int y = get<1>(tp)+dy[i];
            int z = get<2>(tp)+dz[i];
            if(x<0||x>=t||y<0||y>=m||z<0||z>=n)continue;
            if(arr[x][y][z]!=0)continue;
            arr[x][y][z] = arr[get<0>(tp)][get<1>(tp)][get<2>(tp)]+1;
            day=arr[x][y][z];
            Q.push({x,y,z});
        }
    }
    for(int i=0;i<t;i++){
        for(int j=0; j<m; j++){
            for(int k =0; k<n; k++){
                if(arr[i][j][k]==0){
                    cout<<-1;
                    return 0;
                }
            }
        }
    }
    cout<<day-1;
}

