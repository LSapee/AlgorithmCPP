#include <bits/stdc++.h>

using namespace std;

// A B 는 2<=100000 구해야할 소수의 범위 10까지
bool primeNums[100005];
int n,A,B;
//소수 처리
void prime(){
    fill(primeNums, primeNums+100000, true);
    for(int i=2; i*i<=100000; i++){
        if(primeNums[i]){
            for(int j =i*i; j<=100000; j+=i){
                primeNums[j] = false;
            }
        }
    }
}
// 해당 범위에 소수가 있는지 체크
bool primeNumInCheck(){
    for(int i=A; i<=B; i++)if(primeNums[i])return true;
    return false;
}
// bfs
int bfs(){
    int arr[1000005];
    fill(arr,arr+1000005,-1);
    queue<int> Q;
    Q.push(n);
    arr[n]=0;
    while(!Q.empty()){
        int cur = Q.front();Q.pop();
        for(auto x : {cur/2,cur/3,cur+1,cur-1}){
            if(x<0||x>1000000)continue;
            if(arr[x]!=-1)continue;
            arr[x]= arr[cur]+1;
            if(x>=A&&x<=B){
                if(primeNums[x])return arr[x];
            }
            Q.push(x);
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
   prime();
    while(T--){
        cin>>n>>A>>B;
        bool check = primeNumInCheck();
        if(!check) {
            // 범위에 소수가 없는경우
            cout <<-1<<"\n";
            continue;
        }
        if(n>=A && n<=B){
            if(primeNums[n]){
                // 처음부터 n이 범위내부의 소수인경우
                cout<<0<<"\n";
                continue;
            }
        }
        int ans = bfs();
        cout<<ans<<"\n";
    }

}