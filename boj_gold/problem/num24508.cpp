#include <bits/stdc++.h>
using namespace std;

int N,K,T;
vector<int> arr;

void input(){
    cin>>N>>K>>T;
    for(int i=0; i<N; i++){
        int k;cin>>k;
        if(k==0)continue;
        arr.push_back(k);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    sort(arr.begin(),arr.end());
    int st=0,ed=arr.size()-1;
    while(T>0 && st<ed){
        while(arr[st]==0)st++;
        while(arr[ed]==0)ed--;
        if(st>=ed)break;
        int A = (K-arr[ed]);
        if(arr[st]>=A){
            T-=A;
            arr[st]-=A;
            arr[ed]=0;
            ed--;
        }else {
            T -= arr[st];
            arr[ed] += arr[st];
            arr[st] =0;
            st++;
        }
    }
    if(T<0){
        cout<<"NO";
        return 0;
    }
    int ans = *max_element(arr.begin(),arr.end());
    string ansS = ans == 0 ?"YES":"NO";
    cout<<ansS;
    return 0;
}