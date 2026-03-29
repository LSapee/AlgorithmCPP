#include <bits/stdc++.h>
using namespace std;

int N;
vector<pair<int,int>> arr;

void input() {
    cin>>N;
    for (int i=0; i<N; i++) {
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
}

void solve() {
    priority_queue<int,vector<int>,greater<int>> PQ;
    for (int i=0; i<N; i++) {
        int a = arr[i].first;
        int h = arr[i].second;
        if (a == 1) {
            PQ.push(h);
        }else {
            while (!PQ.empty()) {
                if (PQ.top()<= h) PQ.pop();
                else break;
            }
        }
        cout<<PQ.size()<<"\n";
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