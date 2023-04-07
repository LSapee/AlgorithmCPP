#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        int count =0;
        int arr[10];
        fill(arr,arr+10,0);
        while(a>0){
            int b = a%10;
            if(arr[b] ==0){
                arr[b]=1;
                count++;
            }
            a/=10;
        }
        cout<<count<<"\n";
    }
}