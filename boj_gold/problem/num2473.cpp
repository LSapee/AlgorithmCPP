#include <bits/stdc++.h>
#define ll long long
using namespace std;

// 3수의 합을 기억하기 위한 변수
ll back = LONG_LONG_MAX;
// 3수의 합이 0에 가까운 숫자 3개 기록용 배열
vector<int> ans(3,0);

void threeSum(vector<int> &arr,int k, int st, int ed){
    //3개의 수가 전부 다른 위치여야하니 st<=ed가 아닌 st<ed
    while(st<ed){
        // 현재 3수의 합
        ll d = (ll)k + (ll)(arr[st]+arr[ed]);
        //3수의 합이 0이 된경우
        if(abs(0-d)<abs(0-back)){
            ans[0]=k;
            ans[1]=arr[st];
            ans[2]=arr[ed];
            back = d;
        }
        if(d<0)st++;
        else if(d>0)ed--;
        else return ;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //입력값 받기
    int n;cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)cin>>arr[i];
    //정렬
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        //3개의 합을 구하는 함수 (배열,처음에 넣을 값, 투포인터 시작 위치, 투포인터 끝 위치)
        threeSum(arr,arr[i],i+1,n-1);
        // 이미 합이 0이 나온경우 break
        if(back==0) break;
    }
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
    return 0;
}