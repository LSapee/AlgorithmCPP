#include <bits/stdc++.h>
using namespace std;

string s ="";
char arr[64][64];
int cnt =0;

bool ok(int x, int y, int n){
    for(int i=x; i<x+n; i++)
        for(int j=y; j<y+n; j++)
            if(arr[x][y]!= arr[i][j])
                return false;
    cnt++;
    return true;
}

void que(int x,int y, int n){
    if(ok(x,y,n)) {
        if(arr[x][y]=='1') s+='1';
        else s+='0';
        return ;
    }
    int k =n/2;
    s+="(";
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++){
            que(x+i*k,y+j*k,k);
        }
    s+=")";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string ss; cin>>ss;
        for(int j=0; j<n; j++){
            arr[i][j]= ss[j];
        }
    }
    que(0,0,n);
    cout<<s<<"\n";
    return 0;
}