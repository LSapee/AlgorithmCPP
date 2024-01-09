#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    char arr[n+2][n+2];
    for(int i=0; i<n+2; i++)
        for(int j=0; j<n+2; j++)
            arr[i][j] ='@';

    for(int i=1; i<n+1; i++)
        for(int j=1; j<n+1; j++)
            arr[i][j]=' ';

    for(int i=0; i<n+2; i++){
        for(int j=0; j<n+2; j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}