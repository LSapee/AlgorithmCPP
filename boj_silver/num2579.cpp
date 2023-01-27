#include <bits/stdc++.h>
using namespace std;

int c[301][3];

int main(){
    int n;
//    계단 칸수 받아오기
    cin>>n;
    int arr[n+1];
//    계단 기본 점수 세팅하기
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<arr[n];
        return 0;
    }
//  초기값 세팅
    c[1][1] = arr[1];//계단을 1칸 올라갔을때 연속해서 밟은 계단의 수 1 경우
    c[1][2] = 0; // 계단을 1칸 올라갔을때 연속해서 밝은 계단의 수가 2일 경우 지하1층 없기에 0
    c[2][1] = arr[2];
    c[2][2] = arr[1]+arr[2];

    for(int i=3; i<=n; i++){
        c[i][1] = max(c[i-2][1],c[i-2][2])+arr[i];
        c[i][2] = c[i-1][1] + arr[i];
    }

    cout<<max(c[n][1],c[n][2]);

}