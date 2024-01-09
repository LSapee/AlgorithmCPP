#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    vector<vector<int>> arr(n,vector<int>(0));
    int st =0;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        if(a==-1) {st=i; continue; }
        arr[a].push_back(i);
    }
    int b;cin>>b;
    int cnt =0;
    queue<int> Q;
    Q.push(st);
    while(!Q.empty()){
        int my = Q.front(); Q.pop();
        if(my==b)continue;
        int k =arr[my].size();
        for(int i=0; i<arr[my].size(); i++){
            if(arr[my][i]==b){
                k--;
                continue;
            }
            Q.push(arr[my][i]);
        }
        if(k==0)cnt++;
    }
    cout<<cnt;
    return 0;
}