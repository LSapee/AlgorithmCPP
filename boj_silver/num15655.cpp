#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
bool visited[8];
vector<int> arr;
vector<int> ans;
void back(int k){
    if(ans.size()==m){
        for(int i:ans)cout<<i<<" ";
        cout<<"\n";
        return ;
    }
    for(int i=k; i<arr.size(); i++){
        if(!visited[i]){
            visited[i] = true;
            ans.push_back(arr[i]);
            back(i+1);
            ans.pop_back();
            visited[i]=false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int a; cin>>a; arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    back(0);
}