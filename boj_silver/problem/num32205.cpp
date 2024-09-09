#include <bits/stdc++.h>
using namespace std;

int N;
map<int,int> mp;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin>>N;

    for(int i=0; i<N; i++){
        int a,b,c;cin>>a>>b>>c;
        if(a==b||a==c)mp[a]++;
        else if(a==b&&a!=c){
            mp[a]++;
            mp[c]++;
        }else if(b==c&&a!=b){
            mp[a]++;
            mp[b]++;
        }else{
            mp[a]++;
            mp[b]++;
            mp[c]++;
        }
    }
    for(auto a: mp){
        if(a.second>1){
            cout<<1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
