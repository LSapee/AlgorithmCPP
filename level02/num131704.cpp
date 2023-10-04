#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    stack<int> stk;
    int st =0;
    for(int i=1; i<=order.size(); i++){
        if(!stk.empty()&&stk.top()==order[st]){
            stk.pop();
            answer++;
            st++;
        }
        if(order[st]!=i) stk.push(i);
        else{
            st++;
            answer++;
        }
    }
    while(!stk.empty()){
        if(stk.top()==order[st]){
            answer++;
            st++;
            stk.pop();
        }else{
            break;
        }
    }
    return answer;
}