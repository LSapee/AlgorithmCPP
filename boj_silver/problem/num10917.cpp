#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(arr,arr+100001,-1);
    int n,m;cin>>n>>m;
    vector<vector<int>> A(n+1);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        A[a].push_back(b);
    }
    queue<int> Q;
    Q.push(1);
    arr[1] =0;

    while(!Q.empty()){
        int t = Q.front();Q.pop();
        for(int i=0; i<A[t].size(); i++){
            int x = A[t][i];
            if(arr[x]>0)continue;
            arr[x] = arr[t]+1;
            Q.push(x);
        }
    }
    cout<<arr[n];
}