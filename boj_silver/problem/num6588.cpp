#include <bits/stdc++.h>
using namespace std;

vector<int> primeNums;
// 이분탐색
int bs(int n){
    int st =0;
    int ed =primeNums.size()-1;
    while(st<=ed){
        int mid = (st+ed)/2;
        if(primeNums[mid] <= n) st = mid+1;
        else ed = mid-1;
    }
    // 만약 최대값이 primeNums.size()랑 같다면 -1반환 아니면 최대 지점 반환
    return st == primeNums.size() ? -1 : st;
}

void findPrimeNums(){
    vector<bool> isPrime(1000011,false);
    for (int i = 2; i <1000011; i++) {
        if (isPrime[i]) continue;
        for (int j = 2; i * j <= 1000010; j++) {
            isPrime[i * j]=true;
        }
        primeNums.push_back(i);
    }
}

void wrongOutput(){
    cout<<"Goldbach's conjecture is wrong.\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n =1;
    findPrimeNums();
    while(cin>>n){
        if(n==0)break;
        int left =0;
        int right = bs(n);
        bool ok = false;
        while(left<=right){
            if(n>primeNums[left]+primeNums[right]){
                left++;
            }else if(n<primeNums[left]+primeNums[right]){
                right--;
            }else if(primeNums[left]+primeNums[right]==n){
                ok=true;
                break;
            }
        }
        if(!ok)wrongOutput();
        else cout<<n<<" = "<<primeNums[left]<<" + "<<primeNums[right]<<"\n";
    }
    return 0;
}