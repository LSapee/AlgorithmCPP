#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> nums;
vector<vector<int>> ans;
vector<int> vis;

void back(vector<int> &arr,int cnt,int st){
    if(cnt==m){
        for(int i=0; i<ans.size(); i++){
            int t=0;
            for(int j=0; j<ans[0].size(); j++){
                if(ans[i][j]==arr[j]) t++;
            }
            if(t==m)return ;
        }
        ans.push_back(arr);
        return ;
    }
    for(int i=st; i<n; i++){
        if(vis[i])continue;
        vis[i] = true;
        arr.push_back(nums[i]);
        back(arr,cnt+1,i);
        arr.pop_back();
        vis[i]=false;
    }
}


int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        nums.push_back(k);
        vis.push_back(false);
    }
    sort(nums.begin(),nums.end());
    vector<int> temp;
    back(temp,0,0);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}