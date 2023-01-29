#include <bits/stdc++.h>
using namespace std;

int arr[2000010];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int k;
        cin >> k;
        arr[k+1000000]++;
    }
    for(int i=0; i<=2000000;i++){
        while(arr[i]--){
            cout<<i-1000000<<"\n";
        }
    }
}
//카운팅 소트

//수의 범위가 제한되어있을때 좋다.
