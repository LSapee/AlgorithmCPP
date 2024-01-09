#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    for(int i=1; i<n; i++){
       int sum = i;
       int k =i;
       while(k>=10){
           sum+=k%10;
           k/=10;
       }
       sum+=k;
       if(sum==n){
           cout<<i;
           return 0;
       }
    }
    cout<<0;
    return 0;
}