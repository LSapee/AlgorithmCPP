#include <bits/stdc++.h>

using namespace std;

int N,M;
void input(){
    cin>>N>>M;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    M = (M*2)-1;
    if(N>=M)cout<<"Yes";
    else cout<<"No";
    return 0;
}