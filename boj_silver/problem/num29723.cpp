#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k;cin>>n>>m>>k;
    map<string,int> mp;
    for(int i=0; i<n; i++){
        string s; int score;
        cin>>s>>score;
        mp[s]=score;
    }
    int mx = 0;
    int mn =0;
    for(int i=0; i<k; i++){
        string s;cin>>s;
        mx+=mp[s];
        mn += mp[s];
        mp[s] =-1;
    }
    vector<int> arr;
    for(auto a:mp){
        if(a.second!=-1)arr.push_back(a.second);
    }
    int si = arr.size()-1;
    sort(arr.begin(),arr.end());
    for(int i=0; i<m-k; i++){
        mx += arr[si-i];
        mn += arr[i];
    }
    cout<<mn<<" "<<mx;
}