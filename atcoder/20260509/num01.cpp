#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,X;
    cin>>N;
    vector<int> arr(N,-1);
    for (int i=0; i<N; i++)cin>>arr[i];
    cin>>X;
    cout<<arr[X-1];
    return 0;
}