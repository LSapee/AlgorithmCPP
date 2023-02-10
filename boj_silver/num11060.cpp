#include <bits/stdc++.h>
using namespace std;

int arr[1001];
int arr2[1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    fill(arr2,arr2+1001,-1);
    for(int i=1; i<n; i++){
        cin>>arr[i];
    }
    queue<int> Q;
    Q.push(1);
    arr2[1] = 0;
    while(!Q.empty()){
        int m = Q.front(); Q.pop();
        for(int j=1; j<=arr[m]; j++){
            int x = m+j;
            if(x>n)continue;
            if(arr2[x]!=-1)continue;
            arr2[x] = arr2[m]+1;
            Q.push(x);
        }
    }
    cout<<arr2[n];
}
