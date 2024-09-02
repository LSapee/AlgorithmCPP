#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int N,K;
long long sum =0;
vector<int> bags;
vector<pair<int,int>> jew;
bool vis[300001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>K;
    //가치 무게
    priority_queue<pair<int,int>> pq;
    // v가치  m무게
    for(int i=0; i<N; i++){
        int m,v;cin>>m>>v;
        jew.push_back({m,v});
    }
    for(int i=0; i<K; i++){
        int a;cin>>a; bags.push_back(a);
    }
    sort(bags.begin(),bags.end());
    sort(jew.begin(),jew.end());
    priority_queue<int> PQ;
    int ix = 0;
    for(int i=0; i<bags.size(); i++){
        while(bags[i]>=jew[ix].X&&ix<jew.size()){
            PQ.push(jew[ix++].second);
        }
        if(!PQ.empty()){
            sum+=PQ.top();PQ.pop();
        }
    }

    cout<<sum;
    return 0;
}
