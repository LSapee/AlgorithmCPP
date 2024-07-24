#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;

int mx=INT_MIN,mn=INT_MAX;

int cal(int target,int index, int num){
    if(index==0) return target + num;
    if(index==1) return target - num;
    if(index==2) return target * num;
    if(index==3) return target / num;
}

void back(vector<int> signs, int k, int target){
    if(k==n){
        mx = max(target,mx);
        mn = min(target,mn);
        return ;
    }
    for(int i=0; i<signs.size(); i++){
        if(signs[i]==0)continue;
        signs[i]--;
        back(signs,k+1,cal(target,i,arr[k]));
        signs[i]++;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    arr.resize(n,0);
    vector<int> signs(4,0);
    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=0; i<4; i++)cin>>signs[i];
    back(signs,1,arr[0]);
    cout<<mx<<"\n"<<mn;
}