#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int Q,V;cin>>Q>>V;
    priority_queue<int> PQ;
    for (int i=0; i<Q; i++) {
        int a;cin>>a;
        if (a ==1) {
            int t,w;cin>>t>>w;
            PQ.push(w-t);
        }else {
            int t;cin>>t;
            if (PQ.size()>0) {
                int cur =PQ.top(); PQ.pop();
                if (cur+t >V) cout<<V<<"\n";
                else cout<<cur+t<<"\n";
            }else {
                cout<<-1<<"\n";
            }
        }
    }
    return 0;
}