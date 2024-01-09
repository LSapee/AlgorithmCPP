#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int car;
        cin>>car;
        int op;
        cin>>op;
        for(int j=0; j<op; j++){
            int count,sa;
            cin>>count>>sa;
            car += count*sa;
        }
        cout<<car<<"\n";
    }
}