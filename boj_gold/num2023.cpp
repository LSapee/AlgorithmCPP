#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int n;
bool ok =false;

void dfs(int a,int k){
    if(k==n){
        for(int i=3; i*i<=a; i+=2){
            if(a%2==0) return ;
            if(a%i==0) return ;
        }
        cout<<a<<"\n";
        return ;
    }
    for(int i=0; i<10; i++){
        a *=10;
        a+= i;
        if(a%2==0){
            a/=10;
            continue;
        }
        for(int j=3; j*j<=a; j+=2){
            if(a%j==0){
                ok=true;
                break;
            }
        }
        if(ok){
            ok=false;
            a/=10;
            continue;
        }
        dfs(a,k+1);
        a/=10;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    dfs(2,1);
    dfs(3,1);
    dfs(5,1);
    dfs(7,1);

}
