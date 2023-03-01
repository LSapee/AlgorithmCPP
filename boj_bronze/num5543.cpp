#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int bg = min(a,b);
    bg = min(bg,c);
    int d,e;
    cin>>d>>e;
    cout<<bg+min(d,e)-50;


    return 0;
}
