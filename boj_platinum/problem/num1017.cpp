#include <bits/stdc++.h>
using namespace std;

int N,M; // N은 최대 50
vector<bool> primeNums;
vector<int> firstG;
vector<int> otherG;
vector<int> ans;
vector<vector<int>> canPair;
vector<int> matchOther;
vector<int> vis;
bool firstNumIsOdd;
int firstNum;
bool check;
// 소수 판별 체
void findPrimeNums(){
    primeNums.resize(2005, false);
    primeNums[0]=true,primeNums[1]=true;
    for(int i=2; i*i<=2004; i++){
        if(primeNums[i])continue;
        for(int j=2; j*i<=2004; j++){
            primeNums[i*j]=true;
        }
    }
}
//입력값 넣어주기
void input(){
    cin>>N;
    cin>>firstNum;
    if(firstNum%2==0)firstNumIsOdd=false;
    else firstNumIsOdd=true;
    for(int i=1; i<N; i++) {
        int a;
        cin >> a;
        if(a%2==0){
            //처음수가 짝수일때. a가 짝수일때
            if(!firstNumIsOdd)firstG.push_back(a);
            else otherG.push_back(a);
        }else{
            // 처음수가 짝수일때 a가 홀수일때
            if(!firstNumIsOdd) otherG.push_back(a);
            else firstG.push_back(a);
        }
    }
    M = otherG.size();
    sort(firstG.begin(),firstG.end());
    sort(otherG.begin(),otherG.end());
}
bool dfs(int a){
    if(vis[a])return false;
    vis[a] = true;
    for(int o :canPair[a]){
        if(matchOther[o] ==-1 || dfs(matchOther[o])){
            matchOther[o] = a;
            return true;
        }
    }
    return false;
}

void solve(){
    for(int cur =0; cur<M; cur++){
        //처음 수와 매칭이 없을경우. 넘어가기
        if(primeNums[firstNum+otherG[cur]])continue;
        canPair.assign(M-1,{});
        for(int i=0; i<M-1; i++){
            for(int j=0; j<M; j++){
                if(cur == j)continue;
                if(!primeNums[firstG[i]+otherG[j]])canPair[i].push_back(j);
            }
        }
        matchOther.assign(M,-1);
        matchOther[cur] = -2;

        int matchCnt =0;
        for(int i =0; i<M-1; i++){
            vis.assign(M-1,0);
            if(dfs(i))matchCnt++;
            else break;
        }
        if(matchCnt==M-1)ans.push_back(otherG[cur]);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    findPrimeNums();
    // 모든 쌍이 소수의 조건이 되려면 짝수 + 홀수의 조건이 성립해야함.
    if(M != (N/2)){
        cout<<-1;
        return 0;
    }
    solve();
    int ansSize = ans.size();
    for(int i=0; i<ansSize; i++){
        if(i==ansSize-1)cout<<ans[i];
        else cout<<ans[i]<<" ";
    }
    if(ansSize==0) cout<<-1;
    return 0;
}