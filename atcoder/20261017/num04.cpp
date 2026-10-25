#include <bits/stdc++.h>
using namespace std;

int N,Q;
vector<long long> arr;
vector<long long> numSum;

long long getSum(long long k) {
    long long lo= 0, hi= N;
    while (lo < hi) {
        long long mid = lo+ (hi-lo+1)/2;
        if (mid*(mid+1)/2 <=k) lo = mid;
        else hi = mid - 1;
    }
    long long t = lo;
    long long r = k-t * (t+1)/2;
    return numSum[t] + arr[r];
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>Q;
    arr.resize(N + 1, 0);
    numSum.resize(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        long long cur;
        cin>>cur;
        arr[i] = arr[i-1]+ cur;
        numSum[i] = numSum[i-1]+ arr[i];
    }
    for (int i=0; i<Q; i++){
        long long l,r;
        cin>>l>>r;
        cout<<getSum(r)-getSum(l-1) <<"\n";
    }
    return 0;
}