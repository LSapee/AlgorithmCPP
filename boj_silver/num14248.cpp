#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    int ai[n];
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        ai[i]=a;
    }
    int k; cin>>k;
    queue<int> Q;
    Q.push(k);
    arr[k] =1;

    while(!Q.empty()){
        int t = Q.front(); Q.pop();
        for(int i :{t+ai[t],t-ai[t]}){
            if(i<0||i>n)continue;
            if(arr[i]!=0)continue;
            Q.push(i);
            arr[i] = 1;
        }
    }
    int count =0;
    for(int i=1; i<=n; i++){
        if(arr[i]==1)count++;
    }
    cout<<count;

}