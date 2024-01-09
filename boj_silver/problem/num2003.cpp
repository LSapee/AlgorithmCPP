#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,k,a,count=0,sum=0;
    vector<int> arr;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    a=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==k){
            count++;
            a++;
            i=a-1;
            sum=0;
        }else if(sum>k){
            a++;
            i=a-1;
            sum=0;
        }
    }
    cout<<count;

    return 0;
}