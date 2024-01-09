#include <vector>
#include <algorithm>
#include <iostream>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<ll> arr;
    for(int i=0; i<n; i++){
        ll k;cin>>k;
        ll m =0;
        while(k>0){
            m*=10;
            m+=k%10;
            k/=10;
        }
        arr.push_back(m);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++)cout<<arr[i]<<"\n";
}