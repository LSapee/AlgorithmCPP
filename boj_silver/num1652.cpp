#include <iostream>
#include <string>
using namespace std;

string s[101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    for(int i=0; i<n; i++){
        string k; cin>>k;
        s[i] = k;
    }
    int w =0;
    int h =0;
    for(int i=0; i<n; i++){
        int sum =0;
        for(int j=0; j<n; j++){
            if(s[i][j]=='.')sum++;
            else {
                if(sum>=2)w++;
                sum=0;
            }
        }
        if(sum >=2 )w++;
    }
    for(int i=0; i<n; i++){
        int sum =0;
        for(int j=0; j<n; j++){
            if(s[j][i]=='.')sum++;
            else {
                if(sum>=2) h++;
                sum =0;
            }

        }
        if(sum>=2)h++;
    }
    cout<< w <<" "<< h;
}
