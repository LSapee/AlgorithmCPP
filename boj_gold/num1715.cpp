#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> Q;
    while(n--){
        int c;cin>>c; Q.push(c);
    }
    int sum =0;
    while(Q.size()>1){
        int num =Q.top(); Q.pop();
        num+= Q.top(); Q.pop();
        sum+= num;
        Q.push(num);
    }
    cout<<sum;
}