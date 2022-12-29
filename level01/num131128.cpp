#include <bits/stdc++.h>
using namespace std;
int main(){

    string X ="100";
    string Y = "203045";
    string s ="";
    int a;
    int arr[10] ={};
    int arr2[10] = {};

    for(int i=0; i<X.size(); i++){
        arr[X[i]-'0']++;
    }
    for(int i=0; i<Y.size(); i++){
        arr2[Y[i]-'0']++;
    }
    for(int i=9; i>=0; i--){
        if(s.size() ==0 &&i==0){
            break;
        }
        a = min(arr[i],arr2[i]);
        while(a>0){
            s+= to_string(i);
            a--;
        }
    }
    if(s.size()==0){
        if(arr[0]>0 && arr2[0]>0){
            s = "0";
        }else{
            s= "-1";
        }
    }
    cout<<s;
    return 0;
}