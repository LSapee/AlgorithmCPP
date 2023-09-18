#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;

    int arr[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            arr[i][j]= 0;
        }
    }
    int RGB[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>RGB[i][j];
        }
    }
    arr[0][0]= RGB[0][0];
    arr[0][1]= RGB[0][1];
    arr[0][2] = RGB[0][2];

    for(int i=1; i<n; i++){
        arr[i][0] = min(arr[i-1][1]+RGB[i][0],arr[i-1][2]+RGB[i][0]);
        arr[i][1] = min(arr[i-1][0]+RGB[i][1],arr[i-1][2]+RGB[i][1]);
        arr[i][2] = min(arr[i-1][0]+RGB[i][2],arr[i-1][1]+RGB[i][2]);
    }
    cout<<min(arr[n-1][0],min(arr[n-1][1],arr[n-1][2]));

    return 0;
}