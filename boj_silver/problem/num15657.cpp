#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> arr;
vector<int> arr2;

void nm(int a){
    if(a==m){
        for(int i=0; i<m; i++)
            cout<<arr2[i]<<" ";
        cout<<"\n";
        return ;
    }
    for(int i=0; i<n; i++){
        if(!arr2.empty()){
            if(arr[i]<arr2.back()) continue;
        }
        arr2.push_back(arr[i]);
        nm(a+1);
        arr2.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    nm(0);
}
