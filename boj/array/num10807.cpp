#include <iostream>
using namespace std;
int main(){
    int a,n,x;
    int arr[202]={};
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a<0){
            a=a*-1;
        }else if(a>0){
            a+=100;
        }
        arr[a]++;
    }
    cin>>x;
    if(x<0){
        x= x*-1;
    }else if(x>0){
        x+=100;
    }
    cout<<arr[x];
    return 0;
}
