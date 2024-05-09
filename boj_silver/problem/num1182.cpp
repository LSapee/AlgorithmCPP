#include <bits/stdc++.h>
using namespace std;

int cnt =0;
int n,m;
bool vis[25];
int arr[25];

void back(int num,int st){
    if(st==n && num ==m){
        cnt++;
        return;
    }
    if(st==n) return ;
    if(num==m)cnt++;
    for(int i=st; i<n; i++){
        if(vis[i])continue;
        vis[i] =true;
        back(num+arr[i],i+1);
        vis[i] =false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>arr[i];
    back(0,0);
    if(m==0)cnt--;
    cout<<cnt;
}