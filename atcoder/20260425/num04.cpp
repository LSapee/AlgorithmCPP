#include <bits/stdc++.h>
using namespace std;

int N,T;
vector<stack<int>> cards;
unordered_map<int,int> mp;

void input() {
    cin>>N>>T;
    cards.assign(N+1, stack<int>());
    for (int i=1; i<=N; i++) {
        mp[i] = i;
        cards[i].push(i);
    }
}

void moveStk(stack<int> &curStk, stack<int> &nxtStk,int &cur, int &nxt) {
    stack<int> swapStk;
    while (!curStk.empty()) {
        swapStk.push(curStk.top());
        curStk.pop();
        if (swapStk.top() == cur)break;
    }
    while (!swapStk.empty()) {
        nxtStk.push(swapStk.top());
        mp[swapStk.top()] = nxt;
        swapStk.pop();
    }
}

void solve() {
    for (int i=0;i<T; i++) {
        int a,b;cin>>a>>b;
        int cur = mp[a];
        int nxt = mp[b];
        moveStk(cards[cur],cards[nxt],a,nxt);
    }
    for (int i=1; i<=N; i++) cout<<cards[i].size()<<" ";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    return 0;
}
