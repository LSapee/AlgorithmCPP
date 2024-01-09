#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    vector<int> arr;
    int st = 0;
    int end =0;
    for(int i=0; i<n; i++){
        int k; cin>>k;
        if(st<k)st=k;
        end += k;
        arr.push_back(k);
    }
    while(st<=end){
        int mid = (st+end)/2;
        int sum =0;
        int count=0;
        for(int i=0; i<n; i++){
            if(sum+arr[i]>mid){
                count++;
                sum=0;
            }
            sum=sum+arr[i];
        }
        if(sum!=0)count++;
        if(count>m)
            st= mid+1;
        else
            end = mid-1;
    }
    cout<<st;
}