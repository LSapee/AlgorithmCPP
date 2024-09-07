#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b) {
    if(a.first>b.first)return false;
    if(a.first<b.first)return true;
    if (a.first == b.first)return a.second < b.second;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>> arr;
    for(int i=0; i<n; i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end(), compare);
    for(int i=0; i<arr.size(); i++)cout<<arr[i].first<<" "<<arr[i].second<<"\n";

    return 0;
}