#include <bits/stdc++.h>
using namespace std;

bool primeNums[100000001];
vector<long long> primeNumbers;

void makePrimeNums(){
    primeNums[1] = true;
    for(long long i=2; i<=100000000; i++){
        if(primeNums[i])continue;
        for(long long j =i*i; j<=100000000; j+=i){
            primeNums[j] =true;
        }
        primeNumbers.push_back(i);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    makePrimeNums();
    int cnt =0;
    long long st,ed;cin>>st>>ed;
    for(int i=0; i<primeNumbers.size(); i++){
        long long t = primeNumbers[i]*primeNumbers[i];
        while(t<=ed){
            if(t>=st)cnt++;
            // 이것은 오버플로우를 방지 하기 위한.......... 오버플로우 너무 싫어!
            if (t>LLONG_MAX/primeNumbers[i]) break;
            t*=primeNumbers[i];
        }
    }
    cout<<cnt;
    return 0;
}

