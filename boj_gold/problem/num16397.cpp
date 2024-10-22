#include <bits/stdc++.h>
using namespace std;

int arr[5] = {10000,1000,100,10,1};
vector<int> vis;

int check(int k){
    for(int j=0; j<5; j++)
        if(k>=arr[j]){
            k-=arr[j];
            break;
        }
    return k;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,T,G;
    cin>>N>>T>>G;
    vis.resize(100000,-1);
    //A 버튼 누르면 N+1
    // B 버튼 누르면 N*2 그리고 arr 비교 - 1;
    // 탈출 조건 N을 G로 만들기 T 버튼은 T번 누르기 가능
    queue<int> Q; Q.push(N);
    vis[N] = 0;
    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        if(vis[cur]>T)continue;
        for(int i=0; i<2; i++){
            int k;
            if(i==1)k=cur+1;
            else {
                k=cur*2;
                if(k>=100000)continue;
                k = check(k);
            }
            if(vis[k]!=-1)continue;
            vis[k] = vis[cur]+1;
            Q.push(k);
        }
    }
    if(vis[G]==-1||vis[G]>T)cout<<"ANG";
    else cout<<vis[G];
    return 0;
}
