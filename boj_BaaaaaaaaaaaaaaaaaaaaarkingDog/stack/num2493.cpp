#include <bits/stdc++.h>
using namespace std;



int main(){
    int N;
    stack<pair<int,int>> stk;
    cin>>N;
    stk.push({100000001,0}); //최대값 1억
    for(int i=1; i<=N; i++){\
        int k;
        cin>>k;
        while(stk.top().first<k){  //스택의 맨위값이 받아온 값보다 낮을때
            stk.pop();
        }
        cout<<stk.top().second;
        stk.push({k,i});
    }
    return 0;
}
