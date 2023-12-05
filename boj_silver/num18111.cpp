#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n,m;

bool secondSort(pair<int,int> &a,pair<int,int> &b){
    if(a.X==b.X){
        return b.second<a.second;
    }
    return a.first<b.first;
}

// a= 목표 블록
vector<int> mkblock(int a,int myItem,vector<vector<int>> arr){
    int time =0;
    vector<int> aa;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            if(arr[i][j]==a)continue; // 목표 높이인 경우
            if(arr[i][j]>a){
                // 목표하는 높이보다 블록의 높이가 높을 경우
                time += (arr[i][j]-a)*2;
                myItem+=arr[i][j]-a;
            }else if(arr[i][j]<a) {
                //목표하는 높이보다 블록의 높이가 낮을 경우
                time += a-arr[i][j];
                myItem-=a-arr[i][j];
            }
        }
    }
    if(myItem<0) return {-1,0};
    aa.push_back(time);
    aa.push_back(a);
    return aa;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> arr;
    int myItem;
    cin>>n>>m>>myItem;
    // 1번 작업 아이템을 캔다 > 인벤토리에 넣는다  2초 소요
    // 2번 작업 아이템으로 해당칸을매꾼다 1초
    // 목표 가장 빠른 시간으로 작업 가능하게하며 높이를 높게하면 좋다.
    for(int i=0; i<n; i++){
        vector<int> a;
        for(int j=0; j<m; j++){
            int b; cin>>b;
            a.push_back(b);
        }
        arr.push_back(a);
    }
    vector<pair<int,int>> ans;
    for(int i=0; i<=256; i++) {
        vector<int> tt = mkblock(i,myItem,arr);
        if(tt[0]==-1)continue;
        ans.push_back({tt[0],tt[1]});
    }
    sort(ans.begin(),ans.end(),secondSort);
    cout<<ans[0].X<<" "<<ans[0].Y<<"\n";

}