#include <bits/stdc++.h>
using namespace std;
//N개
int N;
bool check(vector<int> a,vector<int> b){
    for(int i=0; i<a.size(); i++)if(a[i]!=b[i])return false;
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin>>N;
    vector<int> arr(N,0);
    vector<int> b(N,-1);
    // 혹시나 arr이랑 b의 시작이 같을 수 있기에
    b[0]= arr[0]+1;
    for(int i=0; i<N; i++) cin>>arr[i];
    // 프로그램을 돌린 횟수
    int cnt =0;
    while(1){
        cnt++;
        for(int i=0; i<N; i++){
            int temp =0;
            for(int j=i+1; j<N; j++){
                if(arr[j]>arr[i])temp++;
            }
            b[i]= temp;
        }
        if(check(b,arr))break;
        arr=b;
    }
    cout<<cnt;
    return 0;
}
