#include <bits/stdc++.h>
using namespace std;

int dx[6] ={0,0,0,0,-1,1};
int dy[6] ={0,1,0,-1,0,0};
int dz[6] ={1,0,-1,0,0,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t;
    while(cin>>n>>m>>t){
        if(n==0&&m==0&&t==0)break;
        char arr[n][m][t];
        int Escaped[n][m][t];
        fill((int*)Escaped,(int*)(Escaped+n),-1);
        queue<tuple<int,int,int>> Q;
        tuple<int,int,int> goal;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                for(int k=0; k<t; k++){
                    cin>>arr[i][j][k];
                    if(arr[i][j][k]=='S') {
                        Q.push(make_tuple(i,j,k));
                        Escaped[i][j][k] =0;
                    }else if(arr[i][j][k]=='E') {
                        goal = make_tuple(i,j,k);
                    }
                }
            }
        }
        while(!Q.empty()){
            tuple<int,int,int> my = Q.front(); Q.pop();
            for(int i=0; i<6; i++){
                int x = get<0>(my)+dx[i];
                int y = get<1>(my)+dy[i];
                int z = get<2>(my)+dz[i];
                if(x<0||x>=n||y<0||y>=m||z<0||z>=t)continue;
                if(arr[x][y][z] == '#' || Escaped[x][y][z]!=-1)continue;
                arr[x][y][z] ='#';
                Escaped[x][y][z] = Escaped[x-dx[i]][y-dy[i]][z-dz[i]]+1;
                Q.push(make_tuple(x,y,z));
//                if(arr[x][y][z]=='E'){
//                    cout<<"Escaped in "<<Escaped[x][y][z]<<" minute(s)."<<"\n";
//                    while(!Q.empty()) Q.pop();
//                }
            }
        }
        if(Escaped[get<0>(goal)][get<1>(goal)][get<2>(goal)] == -1){
            cout<<"Trapped!\n";
        }else{
            cout<<"Escaped in "<<Escaped[get<0>(goal)][get<1>(goal)][get<2>(goal)]<<" minute(s)."<<"\n";
        }
//        for(int i=0;i<n;i++){
//            for(int j=0; j<m; j++){
//                for(int k=0; k<t; k++){
//                    cout<<arr[i][j][k];
//                }
//                cout<<"\n";
//            }
//            cout<<"\n";
//        }
    }
}