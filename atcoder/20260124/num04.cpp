#include <bits/stdc++.h>
using namespace std;

// 구현?
// 조건 1 a== 1 일때는 숫자 1개를 받아서 다음 수와 교환,2  a==2일때는 l,r을 받아서 l~r까지의 합을 구하기
// 처음 : 그냥 조건대로 실행 -> 역시 TLE
// 2번째 : 합을 미리 구해두고 스왑이 있으면 a==2일때 합을 다시 미리 다 구하고 뽑기로함.  -> TLE
// 3번째 : 스왑이 x+1일때만 한다는것을 생각해 전체적인 합을 바뀌지 않을 것이라는 것을 알고 arr[x]에만 현재수 -arr[x]+arr[x+1]을 해주므로 변경함
// 1 8 5 9 28으로 생각해봄.

int N,M;
vector<int> arr;
vector<int> ans;
void input(){
    cin>>N>>M;
    arr.resize(N+1,0);
    ans.resize(N+1,0);
    for(int i=1; i<=N; i++) {
        cin>>arr[i];
        ans[i] = ans[i-1]+arr[i];
    }
}
void solve(){
    for(int i=0; i<M; i++){
        int a;cin>>a;
        if(a==1){
            int x; cin>>x;
            ans[x] -= arr[x];
            ans[x] += arr[x+1];
            swap(arr[x],arr[x+1]);
        }else{
            int l,r; cin>>l>>r;
            cout<< ans[r] - ans[l-1]<<"\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    return 0;
}
