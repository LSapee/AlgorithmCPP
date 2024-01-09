#include <bits/stdc++.h>
using namespace std;

int arr[101];
int myboard[101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int snake,n;
    cin>>snake>>n;
    for(int i=0;i<n+snake; i++){
        int a,b;
        cin>>a>>b;
        arr[a] = b;
    }

    queue<int> Q;
    Q.push(1);
    myboard[1]=0;
    while(myboard[100] ==0){
        int st = Q.front(); Q.pop();
        for(int i=1; i<=6; i++){
            int x = st+i;
            if(x>100) continue;
            if(arr[x]!=0){
                x= arr[x];
            }
            if(myboard[x]!=0)continue;
            myboard[x] =myboard[st]+1;
            Q.push(x);
        }
    }
    cout<<myboard[100];
}
