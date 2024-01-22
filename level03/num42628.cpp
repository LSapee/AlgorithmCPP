#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    priority_queue<int> maxQ;
    priority_queue<int,vector<int>,greater<int>> minQ;
    for(int i=0; i<operations.size(); i++){
        char a = operations[i][0];
        int k = stoi(operations[i].substr(2));
        if(a=='I'){
            minQ.push(k);
            maxQ.push(k);
        }else{
            if((!maxQ.empty()&&!minQ.empty())&& (maxQ.top()==minQ.top())){
                while(!maxQ.empty())maxQ.pop();
                while(!minQ.empty())minQ.pop();
            }else if(k==1 && !maxQ.empty()) {
                maxQ.pop();
            }else if(k==-1 && !minQ.empty()){
                minQ.pop();
            }
        }
    }
    if(maxQ.empty())answer.push_back(0);
    else answer.push_back(maxQ.top());
    if(minQ.empty())answer.push_back(0);
    else answer.push_back(minQ.top());

    return answer;
}
