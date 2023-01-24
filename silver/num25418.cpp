#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    fill(arr,arr+1000001,-1);
    queue<int> Q;
    Q.push(n);
    arr[n]++;
    while(!Q.empty()){
        int i = Q.front();
        Q.pop();
        for(int a : {i+1,i*2}){
            if(a<0 || a>1000001)continue;
            if(arr[a]!= -1) continue;
            arr[a] = arr[i]+1;
            if(a==m){
                cout<<arr[a];
                return 0;
            }
            Q.push(a);
        }

    }
    return 0;
}