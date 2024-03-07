#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100000][3];

// 제약조건 4MB = 1000000칸 int 기준

int minNum(){
    int ans[2][3];
    for(int i=0; i<3; i++)ans[0][i] = arr[0][i];
    for(int i=1; i<n; i++){
        ans[1][0] = min(ans[0][0]+arr[i][0],ans[0][1]+arr[i][0]);
        ans[1][1] = min(ans[0][0]+arr[i][1],min(ans[0][1]+arr[i][1],ans[0][2]+arr[i][1]));
        ans[1][2] = min(ans[0][1]+arr[i][2],ans[0][2]+arr[i][2]);
        ans[0][0] = ans[1][0];
        ans[0][1] = ans[1][1];
        ans[0][2] = ans[1][2];
    }
    int result = INT_MAX;
    for(int i=0;i<3; i++){
        result = min(ans[0][i],result);
    }
    return result;
}

int maxNum(){
    int ans[2][3];
    for(int i=0; i<3; i++)ans[0][i] = arr[0][i];
    for(int i=1; i<n; i++){
        ans[1][0] = max(ans[0][0]+arr[i][0],ans[0][1]+arr[i][0]);
        ans[1][1] = max(ans[0][0]+arr[i][1],max(ans[0][1]+arr[i][1],ans[0][2]+arr[i][1]));
        ans[1][2] = max(ans[0][1]+arr[i][2],ans[0][2]+arr[i][2]);
        ans[0][0] = ans[1][0];
        ans[0][1] = ans[1][1];
        ans[0][2] = ans[1][2];
    }
    int result = INT_MIN;
    for(int i=0;i<3; i++){
        result = max(ans[0][i],result);
    }
    return result;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    int mx = maxNum();
    int mn = minNum();
    cout<<mx<<" "<<mn;
}