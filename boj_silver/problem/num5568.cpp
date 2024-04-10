#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> arr;
vector<bool> vis;
set<int> ansL;

void back(string s,int cnt){
    if(cnt==k){
        int num = stoi(s);
        ansL.insert(num);
        return ;
    }
    for(int i=0; i<n; i++){
        if(vis[i])continue;
        vis[i]=true;
        back(s+to_string(arr[i]),cnt+1);
        vis[i]=false;
    }
    return ;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0; i<n; i++){
        int a; cin>>a; arr.push_back(a);
        vis.push_back(false);
    }
    back("",0);
    cout<<ansL.size();
}