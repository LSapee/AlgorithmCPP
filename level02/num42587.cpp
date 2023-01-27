#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> priorities ={1,1,2,3,2,1};
    int location =0;
    queue<pair<int,int>> que;
    queue<pair<int,int>> que2;
    for(int i=0; i<priorities.size(); i++){
        que.push({priorities[i],i});
    }
    sort(priorities.rbegin(),priorities.rend());
    int k=0,m=priorities[k];
    while(!que.empty()){
        pair<int,int> a = que.front(); que.pop();
        if(a.X == m){
            que2.push(a);
            k++;
            m=priorities[k];
        }else{
            que.push(a);
        }
    }
    int count =0;
    while(!que2.empty()){
        count++;
        pair<int,int> a = que2.front(); que2.pop();
        if(a.Y==location){
            break;
        }
    }
    cout<<count;


    return 0;

}