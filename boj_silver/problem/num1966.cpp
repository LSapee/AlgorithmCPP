#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int> arr;
        queue<pair<int,int>> Q;
        for(int i=0; i<n; i++){
            int k; cin>>k;
            arr.push_back(k);
            Q.push({k,i});
        }
        sort(arr.rbegin(),arr.rend());
        int cnt =0;
        int ans =-1;
        for(int i=0; i<n; i++){
            int k= arr[i];
            while(!Q.empty()){
                pair<int,int> cur = Q.front(); Q.pop();
                if(cur.X==k){
                    if(cur.Y==m)ans=cnt;
                    cnt++;
                    break;
                }
                Q.push({cur.X,cur.Y});
            }
            if(ans!=-1){
                cout<<ans+1<<"\n";
                break;
            }
        }
    }
}