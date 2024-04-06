#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[101][101];

void paper(int xst,int yst,int xed,int yed){
    for(int i=xst; i<=xed; i++){
        for(int j=yst; j<=yed; j++){
            arr[i][j]++;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    int cnt =0;
    for(int i=0; i<n; i++){
        int xst,yst,xed,yed;
        cin>>xst>>yst>>xed>>yed;
        paper(xst,yst,xed,yed);
    }
    for(int i=1; i<=100; i++){
        for(int j=1; j<=100; j++){
            if(arr[i][j]>m)cnt++;
        }
    }
    cout<<cnt;
}