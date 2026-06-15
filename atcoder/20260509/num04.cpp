#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL N,K;
vector<LL> arr;

void input() {
    cin>>N>>K;
    for (int i=0; i<N; i++) {
        LL temp;cin>>temp;
        arr.push_back(temp);
    }
}

bool check(LL mid) {
    LL temp = 0;
    for (int i=0; i<N; i++) {
        LL cur =i+1;
        if (arr[i]<mid) {
            LL diff= mid-arr[i];
            temp += (diff+cur-1) / cur;
            if (temp>K) return false;
        }
    }
    return temp <= K;
}

void solve() {
    LL l = 0;
    LL r = LLONG_MAX;
    while (l+1<r) {
        LL mid = l+(r-l)/2;
        if (check(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout<<l;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    return 0;
}