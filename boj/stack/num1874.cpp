#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b;
    cin>>n;
    int arr[n+1];
    stack<int> stk;
    string s="";
    for(int i=1; i<=n; i++){
        cin>>a;
        arr[i] = a;
    }
    b=1;
    for(int i=1; i<=n; i++){
        stk.push(i);
        s+="+\n";
        while(!stk.empty() && stk.top() == arr[b]){
            stk.pop();
            b++;
            s+="-\n";
        }
    }
    if(!stk.empty()){
        s = "NO";
    }
    cout<<s;
    return 0;
}