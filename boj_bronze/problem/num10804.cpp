#include <iostream>
#include <vector>
using namespace std;

int arr[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0; i<10; i++){
        int a,b;cin>>a>>b;
        if(a==b)continue;
        while(a<b){
            swap(arr[a],arr[b]);
            a++;
            b--;
        }
    }
    for(int i=1; i<21; i++)cout<<arr[i]<<" ";
}