#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;cin>>N;
    int T,P;
    int arr[N];
    for(int i=0; i<6; i++)cin>>arr[i];
    cin>>T>>P;
    int Tans = 0;
    for(int i=0; i<6; i++) Tans+= arr[i]/T + (arr[i]%T==0?0:1);
    cout<<Tans<<"\n";
    cout<<N/P<<" "<<N%P;
    return 0;
}