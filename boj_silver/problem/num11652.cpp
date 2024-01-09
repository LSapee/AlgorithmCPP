#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    vector<long long> arr;
    for(int i=0; i<n; i++){
        long long b;cin>>b;
        arr.push_back(b);
    }
    sort(arr.begin(),arr.end());
    int count=0,mxcount=0;
    long long maxval = LONG_MIN;

    for(int i=0; i<n; i++){
        if(i==0 ||arr[i]==arr[i-1])
            count++;
        else{
            if(count>mxcount){
                maxval=arr[i-1];
                mxcount = count;
                }
            count=1;
        }
    }
    if(count>mxcount) maxval = arr[n-1];
    cout<<maxval;
}