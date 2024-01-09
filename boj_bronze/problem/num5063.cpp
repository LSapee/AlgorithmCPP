#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    for(int i=0; i<n; i++){
        int r,e,c;cin>>r>>e>>c;
        int a = e-c;
        if(a>r){
            cout<<"advertise\n";
        }else if(a==r){
            cout<<"does not matter\n";
        }else {
            cout<<"do not advertise\n";
        }
    }
}
