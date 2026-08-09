#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> P;
vector<int> Q;
bool start = false;
bool END = false;
int ans =0;
vector<int> nums;
vector<int> vis;
bool end(vector<int> K) {
    for (int i=0; i<N; i++)if (Q[i]!= K[i])return false;
    return true;
}

void back(vector<int> K,int a) {
    if (END) return;
    if (a == N) {
        if (K == P) start = true;
        if (start) {
            ans++;
            if(K == Q) END = true;
        }
        return;
    }
    for (int i = 0; i < N; i++) {
        if (vis[i]) continue;
        if (!start && nums[i] != P[a])continue;
        vis[i] = true;
        K.push_back(nums[i]);
        back(K, a + 1);
        K.pop_back();
        vis[i] = false;
        if (END) return ;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    P.resize(N);
    Q.resize(N);
    vis.resize(N,false);
    for (int i=1; i<=N; i++)nums.push_back(i);
    for (int i=0; i<N; i++)cin>>P[i];
    for (int i=0; i<N; i++)cin>>Q[i];
    if (P>Q) {
        cout<<0;
        return 0;
    }
    vector<int> temp;
    back(temp,0);
    if (END) cout<<ans-2;
    else cout<<0;
    return 0;
}