#include <bits/stdc++.h>
using namespace std;

int main(){

    string t = "500220839878";
    string p = "7";
    string s ="";
    int count=0,len=t.size(),c=p.size();
    long long b=stoll(p);
    for(int i=0; i<len; i++){
        s= s+t[i];
        if(s.size()==c){
           if(b>=stoll(s)){
               count++;
           }
           i-=c-1;
           s="";
        }
    }
    cout<<count;



    return 0;
}