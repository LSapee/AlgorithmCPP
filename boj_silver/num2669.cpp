#include <bits/stdc++.h>
using namespace std;

int arr[101][101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n=4;
    while(n--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        for(int i=b; i<d; i++){
            for(int j=a; j<c; j++){
                arr[i][j] = 1;
            }
        }
    }
    int sum=0;
    for(int i=1; i<101; i++){
        for(int j=1; j<101; j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}