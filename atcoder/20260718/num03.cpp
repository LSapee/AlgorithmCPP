#include <bits/stdc++.h>
using namespace std;
int N,M;
int cnt(vector<int> arr1,vector<int> arr2,int k) {
    int count = k;
    int temp = k;
    for (int i = 0; i < N - 1; i++) {
        int Arr1 = (arr1[i]+arr1[i+1])%2;
        int nxt = Arr1 ^temp ^arr2[i];
        count += nxt;
        temp = nxt;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>N>>M;
    vector<int> arr1(N,0);
    vector<int> arr2(N-1,0);
    for (int i=0; i<N; i++) cin>>arr1[i];
    for (int i=0; i<N-1; i++) cin>>arr2[i];
    int ans = min(cnt(arr1,arr2,0),cnt(arr1,arr2,1));
    cout<<ans;
    return 0;
}
