#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int T;
vector<int> ans;
void output(){
    int n= ans.size();
    for(int i=0; i<n; i++)cout<<ans[i]<<"\n";
}

void input(){
    cin>>T;
}
void solve(){
    while(T--){
        vector<pair<int,int>> arr;
        for(int i=0; i<4; i++){
            int a,b;cin>>a>>b;
            arr.push_back({a,b});
        }
        vector<long long> lines;
        for(int i=0; i<4; i++){
            for(int j=i+1; j<4; j++){
                long long x = arr[i].X-arr[j].X;
                long long y = arr[i].Y-arr[j].Y;
                lines.push_back(x*x+y*y);
            }
        }
        sort(lines.begin(),lines.end());
        if(lines[0]==lines[3]){
            if((lines[4]==lines[5]) &&(lines[0]*2 == lines[4]))ans.push_back(1);
            else ans.push_back(0);
        }else ans.push_back(0);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    output();
    return 0;
}