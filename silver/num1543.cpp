#include <bits/stdc++.h>
using namespace std;

int main(){

    string s,ss;
    getline(cin,s);
    getline(cin,ss);
    int count=0;
    while(s.find(ss,0)!= string::npos){
        count++;
        s.replace(s.find(ss),ss.length(),"A");
    }
    cout<<count;
}