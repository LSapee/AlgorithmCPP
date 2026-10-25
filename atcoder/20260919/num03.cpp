#include <bits/stdc++.h>
using namespace std;

int T(priority_queue<int> PQ) {
    PQ.pop();
    PQ.pop();
    return PQ.top();
}

void Rs(priority_queue<int> &PQ) {
    int a= PQ.top(); PQ.pop();
    int b= PQ.top(); PQ.pop();
    int c= PQ.top(); PQ.pop();
    PQ.pop();
    PQ.push(a);
    PQ.push(b);
    PQ.push(c);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    priority_queue<int> PQ;
    for (int i=0; i<N; i++) {
        int a;cin>>a;
        PQ.push(a);
        if (PQ.size() > 3) Rs(PQ);
        if (PQ.size()==3) cout<<T(PQ)<<"\n";
    }
    return 0;
}