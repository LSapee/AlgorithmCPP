#include <bits/stdc++.h>
using namespace std;

int n;
int cnt =0;
bool vis[1004]; //50*20은 최대 1000
int arr[4] ={1,5,10,50};

void back(int k,int sum,int t){
    if(k==n){
        if(!vis[sum]){
            vis[sum]=1;
            cnt++;
        }
        return ;
    }
    for(int i=0; i<4; i++){
        if(arr[i]<arr[t])continue;
        t=i;
        back(k+1,sum+arr[i],t);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    back(0,0,0);
    cout<<cnt;
}