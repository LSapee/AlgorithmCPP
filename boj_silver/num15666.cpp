#include <bits/stdc++.h>
using namespace std;

int n,m;
int ans[9];
int ok[10001];
vector<int> arr;

void NandM(int k){
    if(k==m){
        for(int i=0; i<k; i++)cout<<ans[i]<<" ";
        cout<<"\n";
        return ;
    }
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<ans[k-1])continue;
            ans[k] = arr[i];
            NandM(k + 1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;

    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(!ok[a])arr.push_back(a);
        ok[a] = true;
    }
    sort(arr.begin(),arr.end());
    NandM(0);
}
