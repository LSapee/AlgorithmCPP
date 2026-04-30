// #include <bits/stdc++.h>
// using namespace std;
//
// int N,M;
// bool ans1 = true;
// vector<bool> check;
// unordered_set<int> st;
// void input() {
//     cin>>N>>M;
//     check.resize(M+1, false);
//     for (int i=0; i<N; i++) {
//         int a;cin>>a;
//         if (st.find(a)== st.end()) {
//             st.insert(a);
//         }else {
//             ans1 = false;
//         }
//         check[a] = true;
//     }
// }
//
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     input();
//     if (ans1)cout<<"Yes\n";
//     else cout<<"No\n";
//     for (int i=1; i<=M; i++) {
//         if (!check[i]) {
//             cout<<"No";
//             return 0;
//         }
//     }
//     cout<<"Yes";
//     return 0;
// }