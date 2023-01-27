#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    int n;
    cin>>n;
    cin.ignore();
    string s;
    for(int i=0; i<n; i++){
        getline(cin,s);
        stack<char> stk;
        for(auto a:s){
            if(a==' '){
                while(!stk.empty()){
                    cout<<stk.top();
                    stk.pop();
                }
                cout<<a;
            }else{
                stk.push(a);
            }
        }
        while(!stk.empty()){
            cout<<stk.top();
            stk.pop();
        }
        cout<<"\n";
    }
}