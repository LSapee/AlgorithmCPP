#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int y,m,d,Y,M,D;
    double t,p,T,P;
    cin>>y>>m>>d>>t>>p;
    cin>>Y>>M>>D>>T>>P;
    int ny,nm,nd;
    double nt,np;
    ny = y-Y;
    nm = m-M;
    nd = d-D;
    nt = t-T;
    np = p-P;
    y+=ny;
    m+=nm;
    d+=nd;
    t+=nt;
    p+=np;
    if(d>30){
        m++;
        d-=30;
    }
    else if(d<=0) {
        m--;
        d = 30+d;
    }
    if(m>12){
      y++;
      m-=12;
    } else if(m<=0){
        y--;
        m = 12+m;
    }
    cout<<fixed;
    cout.precision(3);
    cout<<y<<" "<<m<<" "<<d<<" "<<t<<" "<<p;

    return 0;
}