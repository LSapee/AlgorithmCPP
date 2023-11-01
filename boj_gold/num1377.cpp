#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;cin>>N;
    vector<pair<int,int>> A;
    for(int i=0; i<N; i++){
        int k;cin>>k;
        A.push_back({k,i});
    }
    sort(A.begin(),A.end());
    int mx = 0;
    for(int i=0; i<N; i++)
        if(mx<A[i].Y-i) mx =A[i].Y-i;
    cout<<mx+1;
}