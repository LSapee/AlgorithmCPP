#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;cin>>n;
    deque<int> DQ;
    while(n--){
        string s;cin>>s;
        int a;
        if(s.compare("push_back") ==0) {
            cin>>a;
            DQ.push_back(a);
        }else if(s.compare("push_front")==0){
            cin>>a;
            DQ.push_front(a);
        }else if(s.compare("front")==0){
            if(!DQ.empty())cout<<DQ.front()<<"\n";
            else cout<<-1<<"\n";
        }else if(s.compare("back")==0){
            if(!DQ.empty())cout<<DQ.back()<<"\n";
            else cout<<-1<<"\n";
        }else if(s.compare("pop_front")==0){
            if(!DQ.empty()){
                cout<<DQ.front()<<"\n";
                DQ.pop_front();
            }else{
                cout<<-1<<"\n";
            }
        }else if(s.compare("pop_back")==0){
            if(!DQ.empty()){
                cout<<DQ.back()<<"\n";
                DQ.pop_back();
            }else{
                cout<<-1<<"\n";
            }
        }else if(s.compare("empty")==0){
            if(!DQ.empty())cout<<0<<"\n";
            else cout<<1<<"\n";
        }else if(s.compare("size")==0){
            cout<<DQ.size()<<"\n";
        }

    }
}