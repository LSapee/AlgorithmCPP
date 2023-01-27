#include <bits/stdc++.h>
using namespace std;

string binary(int a){
    string s="";
    while(a>0){
        s = to_string(a%2)+s;
        a/=2;
    }
    return s;
}

int main(){
    int n,count=0;
    cin>>n;
    for(int i=1; i<n; i++){
        if(binary(i).compare("11") !=0){
            count++;
        }
    }
    cout<<count;
    return 0;
}