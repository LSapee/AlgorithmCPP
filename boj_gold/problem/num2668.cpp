#include <bits/stdc++.h>
using namespace std;

int N;
vector<bool> vis;
vector<int> ans;
vector<int> arr;

// 문제 요구 사항 -> 사이클이 몇개나 존재하는가?

void go(int start){
    unordered_set<int> t;
    unordered_set<int> d;
    queue<int> Q;
    Q.push(start);
    while(!Q.empty()){
        int cur = Q.front();Q.pop();
        t.insert(cur);
        d.insert(arr[cur]);
        if(t.find(arr[cur])!=t.end())break;
        if(vis[arr[cur]])continue;
        Q.push(arr[cur]);
    }
    int k = t.size();
    for(auto a: t){
        if(d.find(a)!=d.end())k--;
        else break;
    }
    if(k==0){
        for(auto a:t){
            vis[a]=true;
            ans.push_back(a);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    arr.resize(N+1, 0);
    vis.resize(N+1,false);
    for(int i=1; i<=N; i++){
        int a;cin>>a;
        if(a==i){
            ans.push_back(i);
            vis[i]=true;
        }
        arr[i]=a;
    }
    for(int i=1; i<=N; i++){
        if(vis[i])continue;
        go(i);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}