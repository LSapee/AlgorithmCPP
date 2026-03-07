#include <bits/stdc++.h>
using namespace std;

int N,T;
vector<int> arr;
vector<int> lows;
void input() {
    cin>>N>>T;
    arr.push_back(0);
    for(int i=1; i<=N; i++) {
        int a; cin>>a;
        arr.push_back(a);
        lows.push_back(a);
    }
}

void solve() {
    sort(lows.begin(),lows.end());
    while (T--) {
        int a;cin>>a;
        priority_queue<int,vector<int>,greater<int>> PQ;
        for (int i=0; i<a; i++) {
            int temp; cin>>temp;
            PQ.push(arr[temp]);
        }
        int st =0;
        int outputInt =0;
        while (!PQ.empty()) {
            int cur = PQ.top(); PQ.pop();
            if (lows[st]== cur) {
                st++;
                continue;
            }
            outputInt = lows[st];
            break;
        }
        if (outputInt ==0)outputInt = lows[st];
        cout<<outputInt<<"\n";
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