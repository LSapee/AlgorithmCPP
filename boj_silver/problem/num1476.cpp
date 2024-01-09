#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int E,S,M;cin>>E>>S>>M;
    int e=0,s=0,m=0;
    int cnt=0;
    while(1){
        e++;s++;m++;
        if(e>15) e=1;
        if(s>28) s=1;
        if(m>19) m=1;
        cnt++;
        if(e==E&&s==S&&m==M) break;
    }
    cout<<cnt;
}