#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    unordered_set<string> enter;
    for(int i=0; i<n; i++){
        string s,ss;cin>>s>>ss;
        if(ss.compare("enter")==0){
            enter.insert(s);
        }else{
            enter.erase(s);
        }
    }
    vector<string> arr;
    for(auto s: enter){
        arr.push_back(s);
    }
    sort(arr.rbegin(),arr.rend());
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}