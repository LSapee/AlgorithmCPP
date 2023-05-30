#include <iostream>
#include <string>
using namespace std;
int arr[65];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    arr[1]=1;
    arr[9]=0;
    arr[17]=1;
    arr[25]=0;
    arr[33]=1;
    arr[41]=0;
    arr[49]=1;
    arr[57]=0;
    for(int i=1; i<=64; i++){
        if(i%8==1)continue;
        if(arr[i-1]==0)arr[i]=1;

    }
    for(int i=0; i<n; i++){
        string s; cin>>s;
        int k; cin>>k;
        int an = ((s[0]-'A')+1)+(s[1]-'1')*8;
        if(arr[an]==arr[k])cout<<"YES\n";
        else cout<<"NO\n";
    }
}
