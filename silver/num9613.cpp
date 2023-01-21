#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        cin >>t;
//      함의 범위가 int 범위를 넘을지 몰라서 int 이후 long long 사용해봄
        ll sum =0;
        vector<int> arr;
        for (int j=0; j<t; j++){
            int m;
            cin>>m;
            arr.push_back(m);
        }

        for(int j=0; j<t-1; j++){
            for(int k=j+1; k<t; k++){
                sum+=gcd(arr[j],arr[k]);
            }
        }
        cout<<sum<<"\n";
    }
}