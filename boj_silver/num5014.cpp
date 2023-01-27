#include <bits/stdc++.h>
using namespace std;

int build[1000002];

int main(){
    int f,s,g,u,d,count=0;
    cin>>f>>s>>g>>u>>d;
    fill(build,build+1000002,-1);

    //f = 건물 최대 층
    // s = 현재 나의 위치
    // g = 내가 가려는 층
    // u = 올라가는 버튼을 눌렀을때 올라가는 층수
    // d = 내려가는 버튼을 눌렀을때 내려가는 층수

    queue<int> Q;
    Q.push(s);
    build[s]=0;

    while(build[g]==-1){
        int k = Q.front(); Q.pop();
        for(int nxt : {k+u,k-d}){
//            0층은 없기에 1층부터시작
            if(nxt<1 || nxt>f) continue;
            if(build[nxt]>-1) continue;
            build[nxt] = build[k]+1;
            Q.push(nxt);
        }
        if(Q.empty()) break;
    }
    if(build[g]==-1){
        cout<<"use the stairs";
    }else{
        cout<<build[g];
    }
}