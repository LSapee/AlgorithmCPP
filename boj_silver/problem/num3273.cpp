#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    int k;cin>>k;
    sort(arr.begin(),arr.end());
    int ed =n-1;
    int cnt= 0;
    for(int i=0; i<n; i++){
        while(ed>i){
            int temp = arr[ed]+arr[i];
            if(temp==k){
                ed--;
                cnt++;
            }else if(temp>k){
                ed--;
            }else{
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}