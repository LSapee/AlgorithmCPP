#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n,m;
int endNumber = 0;

vector<int> arr;
bool posts[10001];

void bfs(){
    queue<pair<int,int>> Q;
    for(int i=0; i<arr.size(); i++){
        Q.push({arr[i],1});
        posts[arr[i]]=true;
    }
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<arr.size(); i++){
            int x = cur.X+arr[i];
            if(x>endNumber||cur.Y==m)continue;
            if(posts[x])continue;
            Q.push({x,cur.Y+1});
            posts[x] = true;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<m; i++)endNumber+=arr[n-1];
    bfs();
    int ans =0;
    int cnt =0;
    for(int i=1; i<=endNumber; i++){
        if(posts[i])cnt++;
        else {
            ans = max(ans,cnt);
            cnt =0;
        }
    }
    if(cnt!=0)ans = max(ans,cnt);
    cout<<ans;
}