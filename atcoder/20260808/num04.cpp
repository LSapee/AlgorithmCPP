#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,Q;
    cin>>N>>Q;
    vector<int> P(N+1,0);
    vector<int> A(N+1,0);
    for (int i=1; i<=N; i++) {
        cin>>P[i];
        A[P[i]]=i;
    }
    vector<int>* cur= &P;
    vector<int>* inv= &A;

    while (Q--) {
        int q;
        cin>>q;
        if (q == 1) {
            int x,y;
            cin>>x>>y;
            int X = (*cur)[x];
            int Y = (*cur)[y];
            swap((*cur)[x], (*cur)[y]);
            (*inv)[X]=y;
            (*inv)[Y]=x;
        } else {
            swap(cur, inv);
        }
    }
    for (int i = 1; i <= N; i++) {
        cout<<(*cur)[i]<<" ";
    }
    return 0;
}