#include <bits/stdc++.h>
using namespace std;

int x;
int ans = INT_MAX;
vector<int> arr;
vector<bool> vis;
void back(string s){
    if(s.size()==arr.size()){
        int num = stoi(s);
        if(num>x) ans= min(ans,num);
        return ;
    }
    for(int i=0; i<arr.size(); i++){
        if(vis[i])continue;
        vis[i] =true;
        back(s+to_string(arr[i]));
        vis[i] =false;
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>x;
    int k = x;
    while(k>0){
        arr.push_back(k%10);
        k/=10;
    }
    for(int i=0; i<arr.size(); i++)vis.push_back(false);
    back("");
    ans = ans==INT_MAX?0:ans;
    cout<<ans;
}