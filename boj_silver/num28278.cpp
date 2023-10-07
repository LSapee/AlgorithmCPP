#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    stack<int> stk;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        if(k==1){
            int kk;cin>>kk;
            stk.push(kk);
        }else if(k==2){
            if(stk.empty()) cout<<-1<<"\n";
            else {
                cout << stk.top() << "\n";
                stk.pop();
            }
        }else if(k==3){
            cout<<stk.size()<<"\n";
        }else if(k==4){
            if(stk.empty()) cout<<1<<"\n";
            else cout<<0<<"\n";
        }else{
            if(stk.empty()) cout<<-1<<"\n";
            else cout<<stk.top()<<"\n";
        }
    }
}