#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        if(i>0)cout<<"\n";
        for(int j=0;j<a; j++){
            for(int k=0; k<a; k++){
                if(j>0 && j<a-1&& k>0&&k<a-1)cout<<"J";
                else cout<<"#";
            }
            cout<<"\n";
        }
    }
}
