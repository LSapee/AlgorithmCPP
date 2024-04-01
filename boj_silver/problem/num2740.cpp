#include <bits/stdc++.h>
using namespace std;

//2차원 배열 값 넣어주기
void input(int a, int b,vector<vector<int>>& arr){
    for(int i=0; i<a; i++){
        vector<int> temp;
        for(int j=0; j<b; j++){
            int c;cin>>c;
            temp.push_back(c);
        }
        arr.push_back(temp);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k;
    cin>>n>>m;
    vector<vector<int>> A;
    input(n,m,A);
    vector<vector<int>> B;
    cin>>m>>k;
    input(m,k,B);
    vector<vector<int>> ans(n,vector<int>(k,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            for(int l = 0; l<m; l++){
                ans[i][j]+= A[i][l]*B[l][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}