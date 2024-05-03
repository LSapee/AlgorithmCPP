#include <bits/stdc++.h>
using namespace std;

vector<int> cows;
vector<bool> vis;
vector<int> ans;
int n,m;

bool isPrimeNum(int k){
    int a = sqrt(k);
    if( k ==1) return false;
    for(int i =2; i<=a; i++)if(k%i==0)return  false;
    // 이미 배열에있는지 확인 -> 나중에 unique써도 되지만 여기서 정리
    for(int i=0; i<ans.size(); i++)if(ans[i]==k)return false;
    return true;
}
void back(int num,int cnt,int st){
    if(cnt==m){
        if(isPrimeNum(num))ans.push_back(num);
        return ;
    }
    for(int i=st; i<n; i++){
        if(vis[i])continue;
        vis[i]=true;
        back(num+cows[i],cnt+1,st+1);
        vis[i]=false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        cows.push_back(k);
        vis.push_back(false);
    }
    back(0,0,0);
    sort(ans.begin(),ans.end());
    if(ans.size()==0)cout<<-1;
    else for(auto cow : ans)cout<<cow<<" ";
}