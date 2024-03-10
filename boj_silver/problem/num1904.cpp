#include <bits/stdc++.h>
#define mod 15746
using namespace std;

int n;
//string ss[2] = {"00","1"};
//int cnt =0;
//void testNum(string s){
//    if(s.size()==n){
//        cnt++;
//        cout<<s<<"\n";
//        return ;
//    }
//    for(int i=0; i<2; i++){
//        if((s+ss[i]).size()>n)continue;
//        testNum(s+ss[i]);
//    }
//}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int arr[n+1];
    arr[1]=1;
    arr[2]=2;
    for(int i=3; i<=n; i++)arr[i]= arr[i-2]%mod+arr[i-1]%mod;
    cout<<arr[n]%mod;
}