#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int arr[1500005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    vector<pair<int,int>> days;
    days.push_back({0,0});
    for(int i=1; i<=T; i++){
        int a,b;cin>>a>>b;
        days.push_back({a,b});
    }
    for(int i=T; i>0; i--){
        int k = days[i].X +i;
        if(k>T+1)arr[i] = arr[i+1];
        else arr[i] = max(arr[i+1],arr[k]+days[i].Y);
    }

    cout<<arr[1];
}