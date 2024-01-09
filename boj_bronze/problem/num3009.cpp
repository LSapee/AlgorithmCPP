#include <iostream>
using namespace std;

int arr[3];
int arr2[3];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0; i<3; i++){
        cin>>arr[i];
        cin>>arr2[i];
    }
    int x =0,y=0;
    if(arr[0]==arr[1]) x=arr[2];
    else if(arr[0]==arr[2]) x=arr[1];
    else if(arr[1]==arr[2]) x= arr[0];
    if(arr2[0]==arr2[1]) y=arr2[2];
    else if(arr2[0]==arr2[2]) y=arr2[1];
    else if(arr2[1]==arr2[2]) y= arr2[0];
    cout<<x<<" "<<y;
}