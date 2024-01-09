#include <bits/stdc++.h>
using namespace std;

bool visited[8];
int arr[9];
int n;
void ans(int a){
    if(a==n){
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
        return ;
    }
    for(int i=0; i<n; i++){
        if(!visited[i]){
            visited[i] =true;
            arr[a] = i+1;
            ans(a+1);
            visited[i]= false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    ans(0);
}