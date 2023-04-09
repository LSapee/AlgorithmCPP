#include <bits/stdc++.h>
using namespace std;

int recursion(int n, int m, int count){
    if(n==0 || m==0){
        return count;
    }else{
        int mx =max(n,m);
        int mn =min(n,m);
        count+= mx/mn;
        n = mx%mn;
        m = mn;
        return recursion(n,m,count);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,count=0;
    cin>>n>>m;
    cout<<recursion(n,m,count);
}