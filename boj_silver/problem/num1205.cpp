#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,nxt,p;cin>>n>>nxt>>p;
    vector<int> arr;
    arr.push_back(nxt);
    for(int i=0; i<n; i++){
        int a;cin>>a;
        arr.push_back(a);
    }
    sort(arr.rbegin(),arr.rend());
    int ans =1;
    int my = 0;
    int cnt = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>nxt){
            ans++;
            continue;
        }
        my = i+1;
        break;
    }
    for(int i=my; i<arr.size(); i++){
        if(arr[i]==nxt)cnt++;
        else break;
    }
    cnt--;
    if(my+cnt>=p)cout<<-1;
    else {
        cout<<ans;
    }

}