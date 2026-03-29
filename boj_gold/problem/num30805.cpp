#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int> arr;
vector<int> arr2;


void input() {
    cin>>N;
    arr.assign(N,0);
    for (int i=0; i<N; i++) cin>>arr[i];
    cin>>M;
    arr2.assign(M,0);
    for (int i=0; i<M; i++) cin>>arr2[i];
}

int findNxt(int &aindex , int &bindex) {
    priority_queue<int> PQ;
    for (int i=aindex; i<N; i++) PQ.push(arr[i]);
    int mx = -1;
    while (!PQ.empty()) {
        int topN = PQ.top();PQ.pop();
        for (int i=bindex; i<M; i++) {
            if (arr2[i]==topN) {
                mx = topN;
                bindex = i+1;
                break;
            }
        }
        if (mx != -1)break;
    }
    for (int i=aindex; i<N; i++) {
        if (arr[i]== mx) {
            aindex = i+1;
            break;
        }
    }
    return mx;
}

void solve() {
    int st =0;
    vector<int> ans;
    priority_queue<int> PQ;
    for (int a : arr)PQ.push(a);
    int mx = 0;
    int aindex = 0;
    int bindex = 0;
    // 가장큰수 찾기
    while (!PQ.empty()) {
        for (int i=0; i<M; i++) {
            if (arr2[i] == PQ.top()) {
                mx = PQ.top();
                bindex = i+1;
                break;
            }
        }
        if (mx != 0)break;
        PQ.pop();
    }
    //공통수열 없을경우.
    if (mx ==0) {
        cout<<0;
        return;
    }
    for (int i=0; i<N; i++) {
        if (arr[i]==mx) {
            aindex = i+1;
            break;
        }
    }
    ans.push_back(mx);
    while (aindex < N && bindex < M) {
        int nxt = findNxt(aindex,bindex);
        if (nxt == -1) break;
        ans.push_back(nxt);
    }
    int ansL =ans.size();
    cout<<ansL<<"\n";
    for (int i=0; i<ansL; i++)cout<<ans[i]<<" ";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    return 0;
}