#include <bits/stdc++.h>
using namespace std;

vector<int> primeNum;
bool primeOk[4000010];
void prime(int n){
    fill(primeOk,primeOk+4000002,true);
    for(int i=2; i<=n; i++){
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                primeOk[i] =false;
                break;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(primeOk[i]) primeNum.push_back(i);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    prime(n);
    int cnt =0;
    for(int i=0; i<primeNum.size(); i++){
        int sum = primeNum[i];
        int st =i;
        if(sum==n) {
            cnt++;
            break;
        }
        while(n>sum){
            sum+=primeNum[++st];
            if(sum==n) cnt++;
            if(st>=primeNum.size())break;
        }
    }
    cout<<cnt;
    return 0;
}