#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL N,K;
vector<vector<LL>> arr;
vector<LL> addArr;

void input() {
    cin>>N>>K;
    for (int i=0; i<N; i++) {
        int M;cin>>M;
        vector<LL> temp;
        for (int j=0; j<M; j++) {
            LL cur; cin>>cur;
            temp.push_back(cur);
        }
        arr.push_back(temp);
    }
    for (int i=0; i<N; i++) {
        LL temp; cin>>temp;
        addArr.push_back(temp);
    }
}
void solve() {
    for (int i=0; i<N; i++) {
        LL k = (LL)arr[i].size();
        LL all = k * addArr[i];
        if (K >all) K-=all;
        else {
            while (K>k)K-=k;
            cout<<arr[i][K-1];
            return ;
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    return 0;
}
