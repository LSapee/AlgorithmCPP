#include <bits/stdc++.h>
using namespace std;

int N,target;
vector<int> arr;

void input() {
    cin>>N>>target;
    for(int i=0; i<N; i++) {
        int a; cin>>a;
        arr.push_back(a);
    }
}

void solve() {
    for(int i=0; i<N; i++) {
        if(arr[i]< target) {
            target = arr[i];
            arr[i] =1;
        }else {
            arr[i]=0;
        }
    }
}

void output() {
    for (int i=0; i<N; i++)cout<<arr[i]<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    output();

    return 0;
}