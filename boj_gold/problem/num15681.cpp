#include <bits/stdc++.h>
using namespace std;

int N,R,Q;
vector<vector<int>> leafArr;
bool vis[100001];
vector<int> ans(100001,1);
vector<vector<int>> depth(100001,vector<int>(0));
int lastDepth =1;
void makeTree(){
    vector<vector<int>> arr;
    vector<vector<int>> Nodes(N+1,vector<int>(0));
    arr.resize(N+1,vector<int>(0));
    leafArr.resize(N+1,vector<int>(0));
    // 입력받기
    for(int i=0; i<N-1; i++){
        int k,kk;cin>>k>>kk;
        Nodes[k].push_back(kk);
        Nodes[kk].push_back(k);
    }
    queue<int> Que;
    Que.push(R);
    vis[R]=true;
    //Root부터 그래프 그리기.
    // 모두 올바른 트리 - 즉 사이클이 존재하지 않기에 부모는 1개만 존재함.
    queue<int> temp;
    while(1){
        if(Que.empty())break;
        while(!Que.empty()){
            int cur = Que.front(); Que.pop();
            depth[lastDepth].push_back(cur);
            for(int i=0; i<Nodes[cur].size(); i++){
                int x = Nodes[cur][i];
                if(vis[x])continue;
                // 자식 - 부모로 가는 방향 그래프
                leafArr[x].push_back(cur);
                arr[cur].push_back(x);
                vis[x]=true;
                temp.push(x);
            }
        }
        Que=temp;
        while(!temp.empty())temp.pop();
        lastDepth++;
    }

    fill(vis,vis+100001,false);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>R>>Q;
    makeTree();
    lastDepth-=1;
    queue<int> Que;
    while(lastDepth!=0){
        for(int i=0; i<depth[lastDepth].size(); i++)Que.push(depth[lastDepth][i]);
        if(lastDepth==1)break;
        while(!Que.empty()){
            int cur = Que.front(); Que.pop();
            int x = leafArr[cur][0];
            ans[x] +=ans[cur];
        }
        lastDepth--;
    }
    for(int i=0; i<Q; i++){
        int k;cin>>k;
        cout<<ans[k]<<"\n";
    }
    return 0;
}
