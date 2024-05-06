#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    while(T--){
        int a,b,c,d,a1,b1,c1,d1;
        cin>>a>>b>>c>>d>>a1>>b1>>c1>>d1;
        a+=a1;
        b+=b1;
        c+=c1;
        d+=d1;
        if(a<1)a=1;
        if(b<1)b=1;
        if(c<=0) c=0;
        int ans =a+(b*5)+(c*2)+(d*2);
        cout<<ans<<"\n";
    }
}