#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    int ans =0;
    for(int i=0; i<n; i++){
        int a,b,c;cin>>a>>b>>c;
        int mx =max(a,b);
        mx=max(mx,c);
        int k=0;
        if(a==b&&b==c)k+= 10000+(a*1000);
        else if((a==b||a==c) &&b!=c) k+=1000+(a*100);
        else if(b==c&& a!=c) k+=1000+(c*100);
        else k+= (mx*100);
        ans =max(ans,k);
    }
    cout<<ans;
}
