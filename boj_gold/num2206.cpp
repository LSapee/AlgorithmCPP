#include <bits/stdc++.h>
#define X first
#define Y second

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

using namespace std;
int n,m;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   cin>>n>>m;

   string s[n];
   queue<pair<int,int>> one;
   for(int i=0;i<n; i++)cin>>s[i];
   int ans = INT_MAX;
   int arr[n][m];
   fill(arr[0],arr[n],-1);
   queue<pair<int,int>> Q;
   Q.push({0,0});
   arr[0][0] =1;
   while(!Q.empty()){
       pair<int,int> cur =Q.front();Q.pop();
       for(int i=0; i<4; i++){
           int x = cur.X+dx[i];
           int y = cur.Y+dy[i];
           if(x<0||x>=n||y<0||y>=m)continue;
           if(s[x][y]=='1' && arr[x][y]==-1){
               one.push({x,y});
               arr[x][y] = arr[cur.X][cur.Y]+1;
               continue;
           }
           if(arr[x][y]!=-1)continue;
           arr[x][y] = arr[cur.X][cur.Y]+1;
           Q.push({x,y});
       }
   }
   while(!one.empty()){
       pair<int,int> cur = one.front(); one.pop();
       for(int i=0; i<4; i++){
           int x = cur.X+dx[i];
           int y = cur.Y+dy[i];
           if(x<0||x>=n||y<0||y>=m)continue;
           if(s[x][y]=='1'|| (arr[x][y]!=-1&&arr[x][y]<=arr[cur.X][cur.Y]+1))continue;
           arr[x][y] = arr[cur.X][cur.Y]+1;
           one.push({x,y});
       }
   }
//   for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//           cout<<arr[i][j]<<" ";
//       }
//       cout<<"\n";
//   }
   if(arr[n-1][m-1]!=-1){
       ans = min(ans,arr[n-1][m-1]);
   }

    if(ans==INT_MAX)cout<<-1;
    else cout<<ans;

}

