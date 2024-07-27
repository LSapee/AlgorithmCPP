#include <bits/stdc++.h>
#define X first
#define Y second
#define INF 1000000000
using namespace std;

// n개의 도시
// m개의 버스
//st 시작도시
//ed 도착해야하는 도시
int n,m,st,ed;
bool vis[1001]; //최소값 저장 완료했는지 T,F
vector<pair<int,int>> arr[1001]; //n의 최대값이 1000
int ans[1001]; //1000개의 도시가 최대 값은 100000을 최대 999번 타도 1억 정도로 끝남

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int a,b,cost; cin>>a>>b>>cost;
        // a도시에서 출발하는 버스 저장 {도착도시 , 비용}
        arr[a].push_back({b,cost});
    }
    cin>>st>>ed;
    // 입력값 끝
    // 출발지 0코스트로 도착 가능
    vis[st] = true;
    fill(ans,ans+1001,INF);
    ans[st] = 0;
    // 도시는 1번부터시작
    for(int i=0; i<arr[st].size(); i++){
        // 시작 도시에서 바로 도착 가능한 도시 번호
        int b = arr[st][i].X;
        // 시작 도시에서 도착 가능한 도시 비용 저장
        ans[b] =min(ans[b],arr[st][i].Y) ;
    }
    while(1){
        int idx = -1;
        for(int i=1; i<=n; i++){
            // 해당 도시는 이미 최소 비용으로 확정되었기에 넘김
            if(vis[i])continue;
            // idx를 현재 도시로 변경
            if(idx==-1) idx=i;
            // 지금도착 가능한 도시중에 최소 값으로 도착 가능한 도시로 변경
            if(ans[i]<ans[idx])idx = i;
        }
        if(idx==-1||ans[idx]==INF) break;
        // 지금 도착한 도시 idx는 최소금액으로 확정
        vis[idx]= true;
        // nxt는 다음 도시,비용
        // arr[idx]는 현재 도시에서 방문 가능한 다음 도시와 비용정보를 가지고 있음
        for(auto nxt : arr[idx]){
            ans[nxt.X] = min(ans[nxt.X],ans[idx]+nxt.Y);
        }
    }
    cout<<ans[ed];
    return 0;
}