#include <bits/stdc++.h>
using namespace std;

int n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //도감에 수록된 포켓몬 갯수n 맞춰야 할 문제 m
    cin>>n>>m;
    //해시맵
    unordered_map<string,string> pokemon;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        string ss = to_string(i+1);
        pokemon.insert({ss,s});
        pokemon.insert({s,ss});
    }
    for(int i=0; i<m; i++){
        string ss;cin>>ss;
        cout<<pokemon.find(ss)->second<<"\n";
    }
    return 0;
}