#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> arr;



void makeStar(int x,int y, int n){
    if(n==1) {
        arr[x][y] ='*';
        return ;
    }
    int k =n/3;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==1&&j==1)continue;
            makeStar(x+i*k,y+j*k,k);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    arr.resize(n,vector<char> (n,' '));
    makeStar(0,0,n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}