#include <bits/stdc++.h>
using namespace std;

int n;
int arr[128][128];
int white=0;
int blue=0;

bool ok(int a, int b, int c){
    for(int i=a; i<a+c; i++)
        for(int j=b; j<b+c; j++)
            if(arr[i][j]!= arr[a][b])
                return false;
    return true;
}

void makePaper(int a, int b, int c){
    if(ok(a,b,c)){
        if(arr[a][b]==0) white++;
        else blue++;
        return ;
    }
    int k = c/2;
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            makePaper(a+i*k,b+j*k,k);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    makePaper(0,0,n);
    cout<<white<<"\n"<<blue;

    return 0;
}