#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;cin>>N;
    vector<vector<int>> arr(N,vector<int>(0));
    for (int i=0; i<N; i++) {
        int M;cin>>M;
        for (int j=0; j<M; j++) {
            int temp; cin>>temp;
            arr[i].push_back(temp);
        }
    }
    int X,Y;cin>>X>>Y;
    cout<<arr[X-1][Y-1];
    return 0;
}