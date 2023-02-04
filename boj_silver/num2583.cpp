#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int arr[101][101];

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> box;
    int n,m,k;
    cin>>n>>m>>k;

    for(int i = 0; i<k; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int j=a; j<c; j++){
            for(int k=b; k<d; k++){
                arr[j][k] = -1;
            }
        }
    }
    int count =0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            queue<pair<int,int>> Q;
            int count2 =0;
            if(arr[i][j] ==0){
                count++;
                count2++;
                Q.push({i,j});
                arr[i][j]=-1;
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front();Q.pop();
                for(int z=0; z<4; z++){
                    int x = cur.X+dx[z];
                    int y = cur.Y+dy[z];
                    if(x<0||x>=m||y<0||y>=n)continue;
                    if(arr[x][y]!=0)continue;
                    count2++;
                    arr[x][y] = -1;
                    Q.push({x,y});
                }
            }
            if(count2!=0){
                box.push_back(count2);
            }
        }
    }
    sort(box.begin(),box.end());
    cout<<count<<"\n";
    for(int i=0; i<box.size(); i++){
        cout<<box[i]<<" ";
    }
}