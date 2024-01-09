#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b+c!=180){
        cout<<"Error";
    }else if(a+b+c==180 && a==60 && b==60){
        cout<<"Equilateral";
    }else if(a+b+c == 180 && (a==b || b==c ||a==c)){
        cout<<"Isosceles";
    }else if(a+b+c ==180 && a!=b&&b!=c&&c!=a){
        cout<<"Scalene";
    }
}