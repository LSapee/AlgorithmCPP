#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int visited[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,n,m;cin>>a>>b>>n>>m;
    fill(arr,arr+100001,-1);
    queue<int> Q;
    Q.push(n);
    arr[n]= 0;
    while(!Q.empty()){
        int x = Q.front(); Q.pop();
        for(int k : {x+1,x-1,x+a,x-a,x+b,x-b,x*a,x*b}){
            if(k<0 || k>100000)continue;
            if(arr[k]!=-1)continue;
                arr[k] = arr[x]+1;
                Q.push(k);
        }
    }
    cout<<arr[m];
}