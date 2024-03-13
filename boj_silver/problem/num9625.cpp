#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;

//    vector<pair<int,int>> arr(45);
//    arr[0].X=1;
//    arr[0].Y=0;
//    arr[1].X=0;
//    arr[1].Y=1;
//    arr[2].X=1;
//    arr[2].Y=1;
    if (n==0){
        cout<<1<<" "<<0;
        return 0;
    }else if(n==1){
        cout<<0<<" "<<1;
        return 0;
    }
    pair<int,int> ans;
    ans.X=1;
    ans.Y=1;
    for(int i=3;i<=n; i++){
        int x = ans.Y;
        int y = ans.X+ans.Y;
        swap(ans.X,x);
        swap(ans.Y,y);
    }
    cout<<ans.X<<" "<<ans.Y;
}