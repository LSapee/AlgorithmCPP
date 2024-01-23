#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int,vector<int>,greater<int>> Q;
    for(int i=0; i<scoville.size(); i++) Q.push(scoville[i]);
    int sc = Q.top(); Q.pop();
    int count =0;
    if(sc>=K) return 0;
    while(!Q.empty()){
        count++;
        int a = Q.top();Q.pop();
        sc+=a*2;
        Q.push(sc);
        sc = Q.top();Q.pop();
        if(sc>=K) break;
    }
    if(sc<K) return -1;
    return count;
}