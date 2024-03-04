#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    long long arr[10001];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;
    arr[4]=4;
    arr[5] =5;
    for(int i=6; i<=10000; i++)arr[i] = arr[i-3]+(i/2)+1;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        cout<<arr[k]<<"\n";
    }
}
//1 =1
//2 =2
//3 =3
//4 =4
//5 = 5
//-------
//6 = 7 3+3+1? 4+3? 5+4-3?
//7 = 8 4+3+1? 7+5-4?
//8 = 10 5+4+1? 8+7-5?
//9 = 12
//10 = 14
//11 = 16
//12 = 19
//13 = 21