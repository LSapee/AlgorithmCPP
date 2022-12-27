#include <bits/stdc++.h>
using namespace std;
//내 코드
int main() {

    int a,b,count;
    count=0;
    cin>>a;
    int arr[9];
    fill(arr,arr+9,1);
    arr[6]++;
    while(a>0){
        b = a%10;
        a= a/10;
        if(b==9){
            b=6;
        }
        if(arr[b]==0){
            count++;
            for(int i=0; i<9; i++){
                arr[i]++;
            }
            arr[6]++;
            arr[b]--;
        }else{
            arr[b]--;
        }
    }
    for(int i=0;i<9;i++){
        if(arr[i]==0){
            count++;
            break;
        }else if(arr[6]==1){
            count++;
            break;
        }
    }
    cout<<count;

    return 0;
}