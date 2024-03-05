#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int margin =0;
int price =0;
vector<bool> vis;
vector<pair<int,int>> arr;

void sell(int k){
    int ans = 0;
    int TP = arr[k].first;
    for(int i=k; i<arr.size(); i++){
        if(TP>arr[i].Y)ans+=TP-arr[i].Y;
        else continue;
    }
    if(ans>margin) {
        price = TP;
        margin = ans;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    for(int i=0; i<n; i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
        vis.push_back(false);
    }
    sort(arr.begin(),arr.end());

    for(int i=0; i<arr.size(); i++)sell(i);
    cout<<price;
}