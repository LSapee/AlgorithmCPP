#include <bits/stdc++.h>
using namespace std;

struct avb{
    bool operator()(int a,int b){
        if(abs(a)>abs(b))return true;
        else if(abs(a)==abs(b)){
            if(a>b){
                return true;
            }else{
                return false;
            }
        }
        return false;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    priority_queue<int,vector<int>,avb> Q;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a!=0)Q.push(a);
        if(a==0){
            if(Q.empty()){
                cout<<0<<"\n";
                continue;
            }else{
                cout<<Q.top()<<"\n";
                Q.pop();
            }
        }
    }
}
