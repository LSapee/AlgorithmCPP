#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,l,a;
    cin>>n>>l;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        if(l>=arr[i]){
            l++;
        }
    }
    cout<<l;

    return 0;
}