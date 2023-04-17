#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    string arr[n];
    string WB[8] = {"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"};
    string BW[8] = {"BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"};
    for(int i=0; i<n; i++){
        string s; cin>>s;
        arr[i] = s;
    }
    int countWB =0;
    int countBW =0;
    int MN =INT_MAX;
    for(int i=0;i<=n-8;i++){
        for(int j=0; j<=m-8; j++){
            for(int x =i; x<i+8; x++){
                int a = x-i;
                for(int y =j; y<j+8; y++){
                    int b = y-j;
                    if(arr[x][y]!=WB[a][b]) countWB++;
                    if(arr[x][y]!=BW[a][b]) countBW++;
                }
            }
            countWB = min(countWB,countBW);
            MN = min(MN,countWB);
            countWB=0;
            countBW=0;
        }
    }
    cout<<MN;
}