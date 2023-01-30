#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    queue<int> q;
    q.push(n);
    while(n!=1){
        n= q.front();q.pop();
        if(n%3==0 && arr[n/3]==0){
            arr[n/3]=arr[n]+1;
            q.push(n/3);
        }
        if(n%2==0 && arr[n/2]==0) {
            arr[n/2]=arr[n]+1;
            q.push(n/2);
        }
        if(n!=0&&arr[n-1]==0) {
            arr[n-1]= arr[n]+1;
            q.push(n-1);
        }
    }
    cout<<arr[1];
}