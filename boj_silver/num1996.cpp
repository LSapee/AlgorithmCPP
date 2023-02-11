#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={1,1,0,-1,-1,-1,0,1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int arr[n+1][n+1];
    for(int i=0; i<n+1; i++){
        for(int j=0; j<n+1; j++){
            arr[i][j] =-1;
        }
    }
    string s[n];
//    배열 넣어주기
    for(int i=0; i<n; i++){
        string ss;
        cin>>ss;
        s[i] = ss;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(s[i][j]=='.'){
                int sum =0;
                for(int a = 0; a<8; a++){
                    int x = i+dx[a];
                    int y = j+dy[a];
                    if(x<0||x>=n||y<0||y>=n)continue;
                    if(s[x][y]=='#'||s[x][y]=='.')continue;
                    sum+= s[x][y]-'0';
                }
                arr[i][j] = sum;
            }
        }
    }

    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]!=-1){
                if(arr[i][j]>=10)cout<<"M";
                else cout<<arr[i][j];
            }else{
                cout<<'*';
            }
        }
        cout<<"\n";
    }
}