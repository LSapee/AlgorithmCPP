#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int N,M;//격자
int R,C;// 방/편의점 갯수 // 최대 N*M<=50
queue<pair<int,int>> Rooms;
queue<int> RP; //방 가격

int ans = INT_MAX;
void input(queue<pair<int,int>> &CQ){
    cin>>N>>M>>R>>C;
    for(int i=0; i<R; i++){
        int a,b,c;cin>>a>>b>>c;
        Rooms.push({a,b});
        RP.push(c);
    }
    for(int i=0; i<C; i++){
        int a,b;cin>>a>>b;
        CQ.push({a,b});
    }
}

int bfs(queue<pair<int,int>> CQ, pair<int,int> start){
    int dis = INT_MAX;
    while(!CQ.empty()){
        auto cur = CQ.front(); CQ.pop();
        dis = min(dis,abs(cur.X-start.X)+abs(cur.Y-start.Y));
    }
    return dis;
}

void solve(queue<pair<int,int>> &CQ){
    while(!Rooms.empty()){
        auto cur = Rooms.front(); Rooms.pop();
        int price = RP.front(); RP.pop();
        if(price>=ans)continue;
        int dis = bfs(CQ,cur);
        ans = min(dis*price,ans);
    }
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    queue<pair<int,int>> CQ;
    input(CQ);
    solve(CQ);
    return 0;
}