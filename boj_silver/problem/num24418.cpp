#include <bits/stdc++.h>
using namespace std;

int arr[15][15];
int cnt =0;
int matrix_path_rec(int a,int b){
    if(a<0||b<0) {
        cnt++;
        return 0;
    }else return arr[a][b]+max(matrix_path_rec(a-1,b),matrix_path_rec(a,b-1));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n;cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int ans = matrix_path_rec(n-1,n-1);
    int ans2 = n*n;
    cout<<cnt<<" "<<ans2<<"\n";
}


