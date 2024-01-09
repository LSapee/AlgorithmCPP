#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    queue<int> mQ;
    queue<int> pQ;
    int Zcnt=0;
    int ans =0;
    for(int i=0; i<n; i++) {
        if(arr[i]<0)mQ.push(arr[i]);
        else if(arr[i]==0){
            Zcnt++;
        }else break;
    }
    for(int i=n-1; i>=0; i--){
        if(arr[i]>1) pQ.push(arr[i]);
        else if(arr[i]==1) {ans++;}
        else break;
    }
    while(!mQ.empty() && mQ.size()>=2){
        int a1 = mQ.front();mQ.pop();
        int a2 = mQ.front();mQ.pop();
        ans+=a1*a2;
    }
    while(!pQ.empty() && pQ.size()>=2){
        int a1 = pQ.front();pQ.pop();
        int a2 = pQ.front();pQ.pop();
        ans+=a1*a2;
    }
    if(!pQ.empty()) {ans+= pQ.front(); pQ.pop();}
    int b=0;
    if(!mQ.empty()) {b= mQ.front(); mQ.pop();}
    if(Zcnt==0) cout<<ans+b;
    else cout<<ans;
}