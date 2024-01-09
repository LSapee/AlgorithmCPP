#include <iostream>
using namespace std;
int main(){ios::sync_with_stdio(0);cin.tie(0);
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==0&&b==0&&c==0)break;
        if(b-a==c-b)cout<<"AP "<<c+(c-b)<<"\n";
        else cout<<"GP "<<c*(b/a)<<"\n";
    }
}