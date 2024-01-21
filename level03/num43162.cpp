#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;

    for(int i=0; i<n; i++){
        queue<int> Q;
        bool ok = false;
        for(int j=0; j<n; j++){
            if(computers[i][j]==1){
                ok=true;
                Q.push(j);
                computers[i][j]=0;
                computers[j][i]=0;
            }
        }
        if(!Q.front()==i){
            answer++;
            Q.pop();
        }
        if(!Q.empty())answer++;
        cout<<Q.size()<<" ";
        while(!Q.empty()){
            int st = Q.front(); Q.pop();
            cout<<st<<" ";
            for(int j=0; j<n; j++){
                if(computers[st][j]==1){
                    Q.push(j);
                    computers[st][j]=0;
                    computers[j][st]=0;
                }
            }
        }

    }
    return answer;
}