#include <bits/stdc++.h>
using namespace std;

bool primeNumber[4000005];
vector<int> nums;
void pm(){

    for(int i=2; i*i<=4000000; i++){
        if(primeNumber[i])continue;
        for(int j=2; j*i<=4000000; j++){
            primeNumber[i*j] =true;
        }
    }
    for(int i=2; i<=4000000; i++) if(!primeNumber[i]) nums.push_back(i);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pm();
    int n;cin>>n;
    for(int i=0; i<nums.size(); i++){
        int k =nums[i];
        int k2 = nums[i];
        if(k<n)continue;
        int pnum =0;
        while(k>0){
            pnum*=10;
            pnum+=k%10;
            k/=10;
        }
        if(pnum==k2) {
            cout<<pnum;
            return 0;
        }
    }
}