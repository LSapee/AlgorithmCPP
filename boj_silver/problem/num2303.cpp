#include <iostream>
using namespace std;
int arr[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int arr2[5];
        for(int j=0; j<5; j++){
            int t; cin>>t; arr2[j]=t;
        }
        int ans =0;
        for(int j=0; j<3; j++){
            for(int k=j+1; k<4; k++){
                for(int l=k+1; l<5; l++){
                   ans = max(ans,((arr2[j]+arr2[k]+arr2[l])%10));
                }
            }
        }
        arr[i]=ans;
    }
    int a=1;
    int pl = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>=pl){
        a=i+1;
        pl = arr[i];
        }
    }
    cout<<a;
}