#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int ans = 0;
    int W = 0;
    queue<int> Q;
    for(int i=0; i<truck_weights.size(); i++){
        while(1){
            if(Q.size() == bridge_length){
                W-= Q.front();
                Q.pop();
            }
            if(W+truck_weights[i]<=weight) break;
            Q.push(0);
            ans++;
        }
        Q.push(truck_weights[i]);
        W+=truck_weights[i];
        ans++;
    }
    ans+=bridge_length;
    return ans;
}