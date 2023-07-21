#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


int solution(int m, int n, vector<vector<int>> puddles) {
    vector<vector<int>> arr(n+1, vector<int>(m+1,1));
    for(int i=0; i<puddles.size(); i++){
        int x = puddles[i][0];
        int y = puddles[i][1];
        arr[y][x] =0;
    }
    int st =1;
    for(int i=2; i<=n; i++){
        if(arr[i][1]==0) st=0;
        arr[i][1] =st;
    }
    st =1;
    for(int j=2; j<=m; j++){
        if(arr[1][j]==0) st=0;
        arr[1][j] =st;
    }
    for(int i=2; i<=n; i++){
        for(int j=2; j<=m; j++){
            if(arr[i][j] ==0) continue;
            arr[i][j] = (arr[i-1][j]+arr[i][j-1])%1000000007;
        }
    }
    return arr[n][m];
}