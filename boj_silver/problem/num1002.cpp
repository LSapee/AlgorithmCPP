#include <bits/stdc++.h>
using namespace std;
int jox,joy,px,py,rx,ry;

int s(int a){
    return a*a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    for(int i=0; i<n; i++){

        cin>>jox>>px>>rx>>joy>>py>>ry;
        int p = (jox-joy)*(jox-joy) +(px-py)*(px-py);
        if(jox==joy&&px==py&&rx==ry)cout<<-1;
        else if(p>s(rx+ry)) cout<<0;
        else if(p == s(rx+ry)) cout<<1;
        else if(p<s(rx+ry)){
            if(p>s(ry-rx))cout<<2;
            else if(p==s(ry-rx))cout<<1;
            else cout<<0;
        }
    cout<<"\n";
    }
}
