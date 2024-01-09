#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;

    for(int i=0; i<n; i++){
        int k; cin>>k;
        int st =2;
        int cnt =0;
        while(k!=0){
            if(k%st==0){
                k=k/st;
                cnt++;
            }else{
                if(cnt!=0)cout<<st<<" "<<cnt<<"\n";
                if(k==1) break;
                cnt=0;
                st++;
            }
        }
    }
}