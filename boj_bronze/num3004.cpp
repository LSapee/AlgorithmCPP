#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int w = n/2+1;
    int h = n-w+2;
    cout<<w*h;
}