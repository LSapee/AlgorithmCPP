#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    vector<int> arr(3);
    for (int i=0; i<N; i++) {
        int pay; cin>>pay;
        int t = 1000 - pay%1000;
        arr[0] += t%10;
        arr[1] += (t%100)/10;
        arr[2] += (t%1000)/100;
    }
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];

    return 0;
}