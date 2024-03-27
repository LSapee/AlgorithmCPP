#include <bits/stdc++.h>
using namespace std;

int ans[10005];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fill(ans,ans+10005,-1);
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)cin>>arr[i];
    int st,target;cin>>st>>target;
    queue<int> Q;
    Q.push(st);
    ans[st]=0;
    while(!Q.empty()){
        // 현재 위치
        int cur = Q.front(); Q.pop();
        if(cur==target){
            cout<<ans[target];
            return 0;
        }
        int jump = arr[cur];
        for(int nxt= cur+jump; nxt<=n; nxt +=jump){
            if(ans[nxt]!=-1)continue;
            ans[nxt] = ans[cur]+1;
            Q.push(nxt);
        }
        for(int nxt= cur-jump; nxt>0; nxt -=jump){
            if(ans[nxt]!=-1)continue;
            ans[nxt] = ans[cur]+1;
            Q.push(nxt);
        }
    }
    cout<<-1;
}


// 여러번 틀린이유
// 1방향으로만 점프 뛰는 경우를 생각함  -> 1,2,3,4,5 가 있을경우 st = 3 target =5 일경우 3>4>5 또는 3>5의 경우만 생각함 3>2>5 또는 3>2>4>5같이 뒤로 갔다오는 경우를 고려하지 못 했었음.
//  음수로 가능 경우를 고려 안했었음;
// GPT이용하여 for문으로 x = cur+(arr[cur]*i)를 보다 효율적으로 범위 적용하는 방법을 수정함