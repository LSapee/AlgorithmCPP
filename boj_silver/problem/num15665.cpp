#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> arr;
vector<bool> vis;

void back(string s,int cnt){
    if(cnt==m){
        cout<<s<<"\n";
        return ;
    }
    for(int i=0; i<arr.size(); i++) back(s+ to_string(arr[i])+" ",cnt+1);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    for(int i=0; i<arr.size(); i++)vis.push_back(false);
    back("",0);
}