#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    vector<string> arr;
    int MAX = 1e9;
    for (ll i =1; i<=MAX; i*=2) arr.push_back(to_string(i));
    set<ll> st;
    queue<ll> Q;
    for (auto cur : arr) {
        ll temp = stoll(cur);
        if (temp<=MAX) {
            st.insert(temp);
            Q.push(temp);
        }
    }
    while (!Q.empty()) {
        ll cur = Q.front();
        Q.pop();
        string curS = to_string(cur);
        for (auto temp : arr) {
            string nxt = curS+temp;
            if (nxt.size()>=10)continue;
            ll nxtL = stoll(nxt);
            if (nxtL<=MAX && st.find(nxtL)==st.end()) {
                st.insert(nxtL);
                Q.push(nxtL);
            }
        }
    }
    int cnt =1;
    for (auto ans :st) {
        if (cnt < N) {
            cnt++;
        }else {
            cout<<ans;
            break;
        }
    }
    return 0;
}