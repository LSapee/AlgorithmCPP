#include <bits/stdc++.h>
using namespace std;

int arr[100001];
bool ok[100001] = {false,};
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(arr,arr+100001,-1);
    int n,a,b,m;
    cin>>n>>a>>b>>m;
    queue<int> Q;
    ok[n]=true;
    arr[n]=0;
    Q.push(n);
    while(!Q.empty()){
        int my =Q.front();Q.pop();
        if(my==m){
            cout<<arr[my];
            return 0;
        }
        for(int x : {my+1,my-1,my+a,my+b,my-a,my+b,my*a,my*b}){
            if(x<0||x>100000)continue;
            if(!ok[x]){
                ok[x] = true;
                arr[x] = arr[my]+1;
                Q.push(x);
            }
        }
    }
    cout<<arr[m];

    return 0;
}
