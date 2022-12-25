#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,maxp,s,x,count;
    cin>>p;
    cin>>maxp;
    count=0;
    int arr[7][2] ={{}};
    for(int i=0; i<p; i++){
        cin>>s;
        cin>>x;
        arr[x][s]++;
    }
    for(int i=1; i<7; i++){
        for(int j=0; j<2; j++){
            if(arr[i][j]<maxp && arr[i][j]>0){
                count++;
            }else{
                count+= arr[i][j]/maxp;
                if(arr[i][j]%maxp>0){
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}