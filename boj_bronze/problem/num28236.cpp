#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,k;cin>>n>>m>>k;
    int ans =INT_MAX;
    int classNum = 0;
    for(int i=1; i<=k; i++){
        int a,b;cin>>a>>b;
        if(ans>a-1+n-b){
            ans = a-1+n-b;
            classNum =i;
        }
    }
    cout<<classNum;

}