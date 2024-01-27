#include <bits/stdc++.h>
#define For(i,n) for(int i=0; i<n; i++)
using namespace std;

int n,m;
int arr[2][3];
bool vis[2][3];
int ans =0;

void re(int k,int work,int lastDay){
    if(k==n){
        if(work>=m)ans++;
        return ;
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            vis[i][j]= true;
            if(j==lastDay) re(k+1,work+(arr[i][j]/2),j);
            else re(k+1,work+arr[i][j],j);
            vis[i][j]=false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            cin>>arr[i][j];
    re(0,0,-1);
    cout<<ans;
}