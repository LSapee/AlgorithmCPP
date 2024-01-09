#include <bits/stdc++.h>
using namespace std;

int z=0,o=0,m=0;
int n;
vector<vector<int>> arr;

bool ok(int a, int b, int c){
    for(int i=a; i<a+c; i++)
        for(int j=b; j<b+c; j++)
            if(arr[a][b] != arr[i][j])
                return false;
    return true;
}

void recursion(int a,int b,int c){
    if(ok(a,b,c)){
        if(arr[a][b]==1) o++;
        if(arr[a][b]==-1) m++;
        if(arr[a][b]==0) z++;
        return ;
    }
    int k =c/3;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            recursion(a+i*k,b+j*k,k);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    arr.resize(n,vector<int>(n,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    recursion(0,0,n);
    cout<<m<<"\n";
    cout<<z<<"\n";
    cout<<o;
    return 0;
}