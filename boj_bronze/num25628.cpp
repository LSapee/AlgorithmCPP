#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,count=0;
    cin>>n>>m;
    while(1){
        if(n<2 ||m <1) break;
        n=n-2;
        m=m-1;
        count++;
    }
    cout<<count;
}