#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int st,ed; cin>>st>>ed;
    int ans =0;
    if(st==ed){
        cout<<0<<"\n"<<1;
        return 0;
    }
    queue<int> Q;
    Q.push(st);
    while(!Q.empty()){
        int k =Q.front(); Q.pop();
        for(int x : {k+1,k*2,k-1}){
            if(x<0||x>100000)continue;
            if(arr[x]!=0){
                if(arr[x]!=arr[k]+1)continue;
            }
            arr[x]= arr[k]+1;
            if(x==ed){
                ans++;
                continue;
            }
            Q.push(x);
        }
    }
    cout<<arr[ed]<<"\n";
    cout<<ans;
}

