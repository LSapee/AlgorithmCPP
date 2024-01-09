#include <iostream>
#include <queue>

using namespace std;
int dog[100001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m; cin>>n>>m;
    int a,b;cin>>a>>b;
    for(int i=0; i<m; i++){
        int c,d;cin>>c>>d;
        for(int j=c; j<=d; j++)dog[j] = -1;
    }
    queue<int> Q;
    Q.push(0);
    while(!Q.empty()){
        int x = Q.front();Q.pop();
        for(auto k : {x+a,x+b}){
            if(k>n)continue;
            if(dog[k]==-1||dog[k]!=0)continue;
            dog[k] = dog[x]+1;
            Q.push(k);
        }
    }
    if(dog[n]==0)cout<<-1;
    else cout<<dog[n];
}
