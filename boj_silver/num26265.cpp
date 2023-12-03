#include <bits/stdc++.h>
using namespace std;

bool un(const pair<string,string> &a,const pair<string,string> &b ){
    if(a.first.compare(b.first)==0){
        return a.second>b.second;
    }
    return a.first<b.first;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<pair<string,string>> arr;
    for(int i=0; i<n; i++){
        string s,ss;cin>>s>>ss;
        arr.push_back({s,ss});
    }
    sort(arr.begin(),arr.end(),un);
    for(int i=0; i<n; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
}