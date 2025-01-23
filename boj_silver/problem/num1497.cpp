#include <bits/stdc++.h>
#define LL long long
using namespace std;

int n,m;
int ans =INT_MAX;
bool vis[10];
long long check = 0L;

void back(vector<LL> &arr,int cnt,LL bitCheck){
    if(ans==1)return ;
    if(bitCheck==check){
        ans = min(ans,cnt);
        return ;
    }
    for(int i=0; i<n; i++){
        if(vis[i])continue;
        vis[i]= true;
        back(arr,cnt+1,(bitCheck|arr[i]));
        vis[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cnt =0;
    cin>>n>>m;
    vector<LL> arr;
    for(int i=0; i<n; i++){
        string s,ss;
        cin>>s>>ss;
        long long temp = 0L;
        for(int j=m-1; j>=0; j--)if(ss[j]=='Y') temp |= (1LL<<j);
        check |= temp;
        arr.push_back(temp);
    }
    cout<<check<<"\n";
    if(check!=0&&ans!=1)back(arr,0,cnt);
    if(ans==INT_MAX)cout<<-1;
    else cout<<ans;
    return 0;
}

