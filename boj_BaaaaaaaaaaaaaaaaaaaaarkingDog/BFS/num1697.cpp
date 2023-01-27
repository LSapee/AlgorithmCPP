#include <bits/stdc++.h>
using namespace std;
int arr[100002];
// 찾아보고 공부 할 것
int main(){
    int n,m;
    cin>>n>>m;
    fill(arr,arr+100001,-1);
    queue<int> que;
    que.push(n);
    arr[n]=0;
    while(arr[m]==-1){
        int a = que.front(); que.pop();
        for(int nxt : {a-1,a+1,2*a}){
            if(nxt<0 ||nxt>100000 ) continue;
            if(arr[nxt] != -1) continue;
            arr[nxt] = arr[a]+1;
            que.push(nxt);
        }
    }
    cout<<arr[m];
    return 0;
}