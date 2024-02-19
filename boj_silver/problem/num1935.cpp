#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;string s;
    cin>>n>>s;
    stack<double> stk;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0; i<s.size(); i++){
        char a = s[i];
        double k;
        if(a=='+'){
            k=stk.top();stk.pop();
            k += stk.top();stk.pop();
            stk.push(k);
        }else if(a=='*'){
            k=stk.top();stk.pop();
            k *= stk.top();stk.pop();
            stk.push(k);
        }else if(a=='-'){
            k=stk.top();stk.pop();
            k = stk.top()-k; stk.pop();
            stk.push(k);
        }else if(a=='/'){
            k=stk.top();stk.pop();
            k = stk.top()/k; stk.pop();
            stk.push(k);
        }else{
            k = arr[a-'A'];
            stk.push(k);
        }
    }
    cout.precision(2);
    cout<<fixed;
    cout<<stk.top();
}