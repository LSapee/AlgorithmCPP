#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,count=0,answer;
    cin>>a>>b;
    int arr[a+1];
    fill_n(arr,a+1,0);
    for(int i=2; i<=a; i++){
        arr[i] =1;
    }
    int c=2;
    while(count!=a-1){
        for(int i =1; c*i<=a; i++){
            if(arr[c*i]!=0){
                arr[c*i] =0;
                count++;
            }
            if(count==b){
                answer = c*i;
                break;
            }
        }
        c++;
        if(count==b){
            break;
        }
    }
    cout<<answer;
    return 0;
}