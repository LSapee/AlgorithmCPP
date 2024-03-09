#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> A;
vector<int> B;
vector<int> ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int k;cin>>k;A.push_back(k);
    }
    for(int i=0; i<m; i++){
        int k;cin>>k;B.push_back(k);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0; i<n; i++){
        bool ok = binary_search(B.begin(),B.end(),A[i]);
        if(!ok) ans.push_back(A[i]);
    }
    cout<<ans.size()<<"\n";
    for(int k:ans)cout<<k<<" ";
}