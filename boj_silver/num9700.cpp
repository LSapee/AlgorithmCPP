#include <bits/stdc++.h>
#define X first
#define Y second

int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a=1;
    while(cin>>n){
        string arr[n];
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            arr[i] =s;
        }
        int count =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                queue<pair<int,int>> Q;
                if(arr[i][j]=='1'){
                    arr[i][j] ='0';
                    Q.push({i,j});
                    count++;
                }
                while(!Q.empty()){
                    pair<int,int> cur = Q.front(); Q.pop();
                    for(int z=0; z<8; z++){
                        int x = cur.X+dx[z];
                        int y = cur.Y+dy[z];
                        if(x<0||x>=n||y<0||y>=n)continue;
                        if(arr[x][y]!='1')continue;
                        arr[x][y] = '0';
                        Q.push({x,y});
                    }
                }

            }
        }
        cout<<"Case #"<<a<<": "<<count<<"\n";
        a++;
    }

}