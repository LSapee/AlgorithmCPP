#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    while(cin>>n>>m){
        int cnt =0;
        for(int i=n; i<=m; i++){
            int k=i;
            bool ok =true;
            int arr[10] = {0,};
            while(k>0){
                arr[k%10]++;
                k/=10;
            }
            for(int i=0; i<10; i++)if(arr[i]>1) ok=false;
            if(ok)cnt++;
        }
        if(cnt<=0) cnt=0;
        cout<<cnt<<"\n";
    }
}