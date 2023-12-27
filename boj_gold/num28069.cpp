#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fill(arr,arr+1000001,-1);
    int target,cnt;cin>>target>>cnt;
    queue<int> Q;
    Q.push(1);
    arr[0] = 0;
    arr[1] = 1;
    while(!Q.empty()){
        int k = Q.front(); Q.pop();
        for(int x :{k+1,k+(k/2)}){
            if(x>target)continue;
            if(arr[x]!=-1)continue;
            arr[x] = arr[k]+1;
            Q.push(x);
        }
    }
    if(arr[target]<=cnt) cout<<"minigimbob";
    else cout<<"water";

};