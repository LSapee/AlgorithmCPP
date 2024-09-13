#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m;
vector<int> primeNums;
bool temp[100001];
// 소수 구하기
void p(){
    // 소수는 2부터 시작한다. 10^6까지의 소수를 구하기
    // 문제에서 10^12까지의 범위를 주지만 10^6으로 하는 이유는 1~10^6까지의 소수로 10^6~10^12를 나누었을 때 나누어지지 않으면 해당 수는 소수이다.
    for(int i=2; i*i<=100000; i++){
        // temp[i]가 수소가 아니면 계산할 필요가 없이 넘긴다 이미 temp[i]는 이미 지나온 수의 배수이다. 관련 배수들은 이미 약수들의 배수로 처리가 되었다.
        //ex  temp[10]일경우 2,5의 배수들로 이미 뒤쪽의 모든 10의 배수는 이미 배수로 처리 되어있다.
        if(temp[i])continue;
        for(int j=2; j*i<=100000; j++){
            // 이미 처리된 수를 또 처리 하지 않게 continue;처리 - 불필요한 대입작업을 제외 (대입하는게 더 시간을 잡아먹는다고....)
            if(temp[j*i])continue;
            temp[j*i] =true;
        }
    }
    for(int i=2; i<=100000; i++)if(!temp[i])primeNums.push_back(i);
}

ll div(ll a){
    for(int i = 0; i<primeNums.size(); i++) if(a%primeNums[i]==0)return a/primeNums[i];
    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    p();
    //n==m이 같아질때까지 인수 분해를 거듭한다.
    while(n!=m){
        // n이 m보다 크면 n을 인수분해
        if(n>m)n=div(n);
        // m이 n보다 크다면 n을 인수분해
        else m=div(m);
        // n또는 m이 1이 나올 때 까지 만나지 못 했다면 1에서 만나게 된다.
        if(n==1||m==1){
            cout<<1;
            return 0;
        }
    }
    cout<<n;
}