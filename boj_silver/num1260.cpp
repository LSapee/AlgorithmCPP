#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> A;
bool visited[1004];
bool visited2[1004];
int n,m,st;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>st;
    A.resize(n);
    for(int i=0; i<m; i++){
        int x,y;cin>>x>>y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    for(int i=0; i<n+1; i++){
        sort(A[i].begin(),A[i].end());
    }
    stack<int> stk;
    stk.push(st);
    visited2[st] = true;
    while(!stk.empty()){
        int k = stk.top(); stk.pop();
        cout<<k<<" ";
        for(int i=0; i<A[k].size(); i++){
            int num = A[k][i];
            if(!visited2[num]){
                stk.push(num);
                visited2[num]=true;
                break;
            }
        }

    }
    cout<<"\n";
    queue<int> Q;
    Q.push(st);
    visited[st] = true;
    while(!Q.empty()){
        int c = Q.front(); Q.pop();
        cout<<c<<" ";
        for(int i=0; i<A[c].size(); i++){
            int num = A[c][i];
            if(!visited[num]){
                Q.push(num);
                visited[num] =true;
            }
        }
    }

    return 0;
}