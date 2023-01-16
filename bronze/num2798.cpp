#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,mx=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        arr[i] =k;
    }

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                int card = arr[i]+arr[j]+ arr[k];
                if(card <= m){
                    mx =max(mx,card);
                }
            }
        }
    }
    cout<<mx;
    return 0;
}