#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int arr[2];
        arr[0]=0;
        arr[1] =0;
        string s;
        cin>>s;
        int m = s.size()/2;
        if(s[m-1]==s[m])cout<<"Do-it\n";
        else cout<<"Do-it-Not\n";
    }

}