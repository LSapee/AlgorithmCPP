#include <bits/stdc++.h>
using namespace std;

bool vis[2001][2001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;cin>>N;
    vector<int> arr(N+1,0);

    for(int i=1; i<=N; i++) {
        cin >> arr[i];
        vis[i][i] = true;
        if(i > 1 && arr[i] == arr[i-1]) vis[i-1][i] = true;
    }

    for(int st=3; st<=N; st++) {
        for(int i=1; i<=N-st+1; i++) {
            int j = i + st - 1;
            vis[i][j] = (arr[i] == arr[j]) && vis[i+1][j-1];
        }
    }
    int M; cin>>M;
    for(int i=0; i<M; i++){
        int a,b;cin>>a>>b;
        if(vis[a][b])cout<<1<<"\n";
        else cout<<0<<"\n";
    }
    return 0;
}