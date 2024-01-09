#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int x[1000001];
vector<int> arr,uni;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i];
        arr.push_back(x[i]);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        if(i==0||arr[i-1]!=arr[i]) uni.push_back(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<lower_bound(uni.begin(),uni.end(),x[i])-uni.begin()<<" ";
    }

    return 0;
}