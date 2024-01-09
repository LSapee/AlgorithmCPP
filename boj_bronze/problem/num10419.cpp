#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        for(int j=1; j<=10000; j++){
            int t = j+j*j;
            if(t>a) {
                cout<<j-1<<"\n";
                break;
            }
        }
    }
}
