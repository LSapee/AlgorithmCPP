#include <bits/stdc++.h>
using namespace std;

int cntArr[8001];
vector<int> threadAns;

void countNums(int mx){
    for(int i=0; i<=8000; i++){
        if(cntArr[i]==mx){
            if(i>4000)threadAns.push_back((i-4000)*-1);
            else threadAns.push_back(i);
        }
    }
    sort(threadAns.begin(),threadAns.end());
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;cin>>N;
    vector<int> arr(N,0);
    for(int i=0; i<N; i++)cin>>arr[i];
    int sum = 0;
    sort(arr.begin(),arr.end());
    int mx = 0;
    for(int i=0; i <N; i++){
        sum+=arr[i];
        if(arr[i]<0){
            cntArr[4000+abs(arr[i])]++;
            if(mx<cntArr[4000+abs(arr[i])])mx = cntArr[4000+abs(arr[i])];
        }else {
            cntArr[arr[i]]++;
            if(mx<cntArr[arr[i]])mx = cntArr[arr[i]];
        }
    }
    double k = (double)sum/N;
    countNums(mx);
    cout<<(int)round(k)<<"\n";
    cout<<arr[N/2]<<"\n";
    if(threadAns.size()>=2)cout<<threadAns[1]<<"\n";
    else cout<<threadAns[0]<<"\n";
    cout<<arr[N-1]-arr[0];
}