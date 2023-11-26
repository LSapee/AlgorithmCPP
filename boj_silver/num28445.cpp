#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<string> st;
    vector<string> arr;
    string s;
    int a=4;
    while(a--){
        string s;cin>>s;
        st.insert(s);
    }
    for(auto i :st) arr.push_back(i);
    sort(arr.begin(),arr.end());
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            cout<<arr[i]<<" "<<arr[j]<<"\n";
        }
    }
}