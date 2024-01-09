#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int sum=0;
    stack<pair<int,int>> stk;
    for(int i=0; i<n; i++){
        int k,so,ti;
        cin>>k;
        if(k==0){
            if(!stk.empty()){
                int s = stk.top().first;
                int t = stk.top().second;
                stk.pop();
                t--;
                if(t==0)
                    sum+=s;
                else
                    stk.push({s,t});
            }
        }else{
            int ss,tt;
            cin>>ss>>tt;
            tt--;
            if(tt==0)
                sum+=ss;
            else
                stk.push({ss,tt});
        }

    }
    cout<<sum;

}