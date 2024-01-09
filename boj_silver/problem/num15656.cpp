#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int ans[8];
bool visited[8];
int n,m;
void NandM(int a,int b){
    if(b==m){
        for(int i=0; i<m; i++) cout<<ans[i]<<" ";
        cout<<"\n";
        return ;
    }
    for(int i =0 ; i<n; i++){
        ans[a] = arr[i];
        NandM(a+1,b+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    for(int i=0; i<n; i++) {
        int a;cin>>a;arr.push_back(a);
    }
    sort(arr.begin(),arr.end());


    NandM(0,0);
}