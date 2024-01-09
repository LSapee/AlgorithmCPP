#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    vector<pair<int,int>> arr;
    vector<pair<int,int>> arr2;
    for(int i=0; i<n; i++){
        int x,y;cin>>x>>y;
        arr.push_back({x,y});
    }
    vector<int> ans;
    for(int i=0; i<n; i++){
        int x = arr[i].X;
        int y = arr[i].Y;
        int cnt=0;
        for(int j=0; j<n; j++){
            if(i==j)continue;
            int p = arr[j].X;
            int q = arr[j].Y;
            if(x<p && y<q)cnt++;
        }
        ans.push_back(cnt);
    }
    for(int i=0; i<n; i++)cout<<ans[i]+1<< " ";
}