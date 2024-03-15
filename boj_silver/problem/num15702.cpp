#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n,m;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin>>n>>m;
    // 문제당 점수
    int arr[n];
    // 사람별 토탈 스코어
    int score[m];
    fill(score,score+m,0);
    //p사람 번호 정령
    int p[m];
    int mxScore =0;
    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=0; i<m; i++){
        cin>>p[i];
        for(int j=0; j<n; j++){
            char OX;cin>>OX;
            if(OX=='O')score[i]+=arr[j];
        }
        mxScore = max(mxScore,score[i]);
    }
    int ansNum =INT_MAX;
    for(int i=0; i<m; i++){
        if(score[i]==mxScore) ansNum = min(ansNum,p[i]);
    }
    cout<<ansNum<<" "<<mxScore;
}