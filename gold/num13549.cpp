#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    fill(arr,arr+100001,-1);
    queue<int> Q;
    Q.push(n);
    arr[n] =0;
    while(!Q.empty()){
        int my = Q.front();
        Q.pop();
        for(int a :{my*2,my-1,my+1}){
            if(a<0|| a>100000) continue;
            if(arr[a]!= -1) continue;
            if(a==my*2){
                arr[a] = arr[my];
            }else if(a==my+1){
                arr[a] = arr[my]+1;
            }else if(a==my-1){
                arr[a] = arr[my]+1;
            }
            Q.push(a);
        }
    }
    cout<<arr[m];

    return 0;
}