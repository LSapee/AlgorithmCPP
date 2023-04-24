#include <bits/stdc++.h>
using namespace std;

vector<int> answer;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> numbers = {2, 3, 3, 5};
    answer.resize(numbers.size());
    stack<int> stk;
    stk.push(0);
    for(int i=1; i<numbers.size(); i++){
        while(!stk.empty() && numbers[stk.top()]<numbers[i]){
            answer[stk.top()]=numbers[i];
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty()){
        answer[stk.top()] =-1;
        stk.pop();
    }
    for(int i=0; i<answer.size(); i++)cout<<answer[i]<<" ";
}
