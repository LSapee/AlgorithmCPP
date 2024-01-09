#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
//  책에서 손으로 풀어보기 보고 품
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;cin>>n>>m;

    deque<pair<int,int>> D;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        // 현재 들어온 수가 덱의 마지막 수보다 클 때 삭제
        while(!D.empty() && D.back().Y > a) D.pop_back();
        D.push_back({i,a});
        if(D.front().X<=i-m)D.pop_front();
        cout<<D.front().Y<<" ";
    }
}