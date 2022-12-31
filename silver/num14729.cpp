#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<double> arr;
    double a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    cout<<fixed;
    cout.precision(3);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}