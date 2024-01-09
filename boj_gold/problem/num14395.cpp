#include <bits/stdc++.h>
#define X first
#define Y second
long long n,m;
using namespace std;
bool ok = false;

string bfs(string s,long long a){
    queue<pair<long long,string>>Q;
    Q.push({a,s});
    set<long long> sk;
    sk.insert(a);
    while(!Q.empty()){
        pair<long long,string> cur = Q.front();Q.pop();
        if(cur.X ==m){
            ok= true;
            return cur.Y;
        }
        for(int i=0; i<3; i++){
            long long x = cur.X;
            string ss = cur.Y;
            if(i==0){
                x*=x;
                ss+="*";
            }else if(i==1){
                x+=x;
                ss+="+";
            }else{
                x/=x;
                ss+="/";
            }
            if(x<1)continue;
            if(sk.find(x)!=sk.end())continue;
            sk.insert(x);
            Q.push({x,ss});
        }
    }
    return "1";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    // *+_/ 순이다.
    string s ="";
    // n과 m이 같으면 0을 반환
    if(m==n){
        cout<<0;
        return 0;
    }
    // 목표가 1일경우 n/n한번의 동작으로 끝남
    if(m==1){
        cout<<'/';
        return 0;
    }
    if(m==0){
        cout<<"-";
        return 0;
    }
    string ans = bfs(s,n);

    if(ok)cout<<ans;
    else cout<<"-1";
    return 0;
}