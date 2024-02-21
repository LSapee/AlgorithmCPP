#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> arr;
vector<int> nums;
bool vis[9];

void NandM(vector<int> temp){
    if(temp.size()==m){
        arr.push_back(temp);
        return ;
    }
    for(int i=0; i<n; i++){
        if(vis[i])continue;
        vis[i]=true;
        temp.push_back(nums[i]);
        NandM(temp);
        vis[i]=false;
        temp.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=0; i<n; i++){
        int k;cin>>k; nums.push_back(k);
    }
    vector<int> temp;
    NandM(temp);
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}