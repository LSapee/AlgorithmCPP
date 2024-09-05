#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    pair<int,int> te;
    pair<int,int> sung;
    vector<vector<int>> arr;
    for(int i=0; i<N; i++){
        vector<int> temp;
        for(int j=0; j<N; j++){
            int a;cin>>a;
            if(a==5)te = {i,j};
            if(a==2)sung = {i,j};
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    int wst = min(te.Y,sung.Y),wed=max(te.Y,sung.Y);
    int hst = min(te.X,sung.X),hed=max(te.X,sung.X);
    int cnt =0;
    int w = wed-wst;
    int h = hed-hst;
    if((w*w)+(h*h)<25){
        cout<<0;
        return 0;
    }
    for(int i=hst; i<=hed; i++){
        for(int j=wst; j<=wed; j++){
            if(arr[i][j]==1)cnt++;
        }
    }
    if(cnt>=3)cout<<1;
    else cout<<0;

}