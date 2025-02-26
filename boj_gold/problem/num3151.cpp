#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int N;

int lbs(int target,int minIndex){
    int st = minIndex;
    int ed = N;
    while(st<ed){
        int mid = (st+ed)/2;
        if(target==arr[mid]){
            ed=mid;
        }else if(arr[mid]<target){
            st=mid+1;
        }else{
            ed=mid;
        }
    }
    return st;
}

int rbs(int target, int minIndex){
    int st = minIndex;
    int ed = N;
    while(st<ed){
        int mid = (st+ed)/2;
        if(target==arr[mid]){
            st=mid+1;
        }else if(arr[mid]<target){
            st=mid+1;
        }else{
            ed=mid;
        }
    }
    return st;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    long long cnt =0;
    arr.resize(N,0);
    for(int i=0; i<N; i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    for(int i=0; i<N-2; i++){
        int k =arr[i];
        if(k>0)break;
        int nxt = i+1;
        while(nxt<N-1){
            int sum = arr[i]+arr[nxt];
            int left = lbs(0-sum,nxt+1);
            int right = rbs(0-sum,nxt+1);
            cnt+=(long long)right-left;
            nxt++;
        }
    }
    cout<<cnt;

    return 0;
}