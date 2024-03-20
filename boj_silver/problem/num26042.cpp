#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int mxLen = 0;
    int mnNum = 0;
    int n;cin>>n;
    queue<int> Q;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        int b;
        if(a==2){
            Q.pop();
            continue;
        }
        if(a==1){
            cin>>b;
            Q.push(b);
        }
        if(Q.size() > mxLen) {
            mxLen= Q.size();
            mnNum =b;
        }
        if(Q.size()==mxLen)mnNum=min(mnNum,b);
    }
    cout<<mxLen<<" "<<mnNum;
}

//식당 입구 대기 줄 num26042