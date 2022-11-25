//
// Created on 2022/11/02.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k[n];

    for(int i=0; i<n; ++i){
        cin>>k[i];
    }
    for(int i=1; i<n; ++i){
        if(k[i]<k[i-1]){
            int a = k[i-1];
            k[i-1] = k[i];
            k[i]=a;
            i=0;
        }
    }
    for(int i=0; i<n; ++i){
        cout<<k[i]<<"\n";
    }
    return 0;
}