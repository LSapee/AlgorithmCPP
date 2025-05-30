#include <bits/stdc++.h>
using namespace std;

int N;
int budget;

bool check(vector<int> &arr, int mid){
    int k =0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>=mid){
            k+=mid;
        }else{
            k+=arr[i];
        }
    }
    return budget>=k;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    vector<int> arr(N,0);
    for(int i=0; i<N; i++)cin>>arr[i];
    cin>>budget;
    int st =0;
    int ed = *max_element(arr.begin(),arr.end());
    while(st<ed){
        int mid = (st+ed+1)/2;
        if(check(arr,mid)){
            st= mid;
        }else{
            ed =mid-1;
        }
    }
    cout<<st;
    return 0;
}