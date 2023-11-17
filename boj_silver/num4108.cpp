#include <bits/stdc++.h>
using namespace std;

int dx[8] ={0,1,1,1,0,-1,-1,-1};
int dy[8] ={1,1,0,-1,-1,-1,0,1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        vector<string> arr;
        for(int i=0;i<n;i++){
            string s;cin>>s;
            arr.push_back(s);
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]=='*')continue;
                int a =0;
                for(int k=0; k<8; k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(arr[x][y]=='*')a++;
                }
                arr[i][j] = '0'+a;
            }
        }
        for(int i=0; i<n; i++)cout<<arr[i]<<"\n";
    }
}