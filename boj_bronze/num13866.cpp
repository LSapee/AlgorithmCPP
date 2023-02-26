#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr;
    for(int i=0; i<4; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int f = arr[0] + arr[3];
    int e = arr[1] + arr[2];
    cout<<abs(f-e);
}
