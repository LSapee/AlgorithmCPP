#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,time=0;
    cin>>n;
    queue<pair<int,int>> que;
    vector<pair<int,int>> arr;

    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        que.push({i,k});
    }

    while(!que.empty()){
        ++time;
        int k = que.front().Y;
        int order = que.front().X;
        que.pop();
        if(k==1){
            arr.push_back({order,time});
            continue;
        }
        k--;
        que.push({order,k});
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        cout<<arr[i].Y<<" ";
    }



    return 0;
}