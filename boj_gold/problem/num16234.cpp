#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int N,L,R;
int Cnt =0;
vector<vector<int>> arr;

void BFS(int stx, int sty,vector<vector<bool>>& vis){
    queue<pair<int,int>> road;
    queue<pair<int,int>> searchRoad;
    searchRoad.push({stx,sty});
    int sumCnt =0;
    int cnt =0;
    vis[stx][sty]= true;
    while(!searchRoad.empty()){
        pair<int,int> cur = searchRoad.front(); searchRoad.pop();
        cnt++;
        road.push(cur);
        sumCnt += arr[cur.X][cur.Y];
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=N||y<0||y>=N)continue;
            if(vis[x][y])continue;
            int temp = abs(arr[cur.X][cur.Y]-arr[x][y]);
            if(temp>=L&&temp<=R){
                vis[x][y] =true;
                searchRoad.push({x,y});
            }
        }
    }
    int avg = sumCnt/cnt;
    while(!road.empty()){
        pair<int,int> cur = road.front();road.pop();
        arr[cur.X][cur.Y] = avg;
    }
}

bool BFSstart(){
    bool ok = false;
    vector<vector<bool>> vis(N,vector<bool>(N,false));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(vis[i][j])continue;
            for(int k = 0; k<4; k++){
                int x = i+dx[k];
                int y = j+dy[k];
                if(x<0||x>=N||y<0||y>=N)continue;
                if(vis[x][y])continue;
                int temp = abs(arr[i][j]-arr[x][y]);
                if(temp>=L&&temp<=R){
                    BFS(i,j,vis);
                    ok = true;
                    break;
                }
            }
        }
    }
    if(ok)Cnt++;
    return ok;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>L>>R;

    //사람수 받기
    for(int i=0; i<N; i++){
        vector<int> temp;
        for(int j=0; j<N; j++){
            int k;cin>>k;
            temp.push_back(k);
        }
        arr.push_back(temp);
    }
    bool ok = true;
    while(ok){
         ok = BFSstart();
//         for(int i=0; i<N; i++){
//             for(int j=0; j<N; j++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<"\n";
//         }
//         cout<<"\n";
    }

    cout<<Cnt;
    return 0;
}