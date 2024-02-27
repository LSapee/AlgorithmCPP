#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
#include <stack>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    stack<int> stk1;
    stack<int> stk2;
    map<int,int> mp1;
    map<int,int> mp2;
    for(int i=0; i<topping.size(); i++) {
        stk1.push(topping[i]);
        mp1[topping[i]]++;
    }
    while(!stk1.empty()){
        int k = stk1.top(); stk1.pop();
        mp1[k]--;
        mp2[k]++;
        if(mp1[k]==0)mp1.erase(k);
        if(mp1.size()==mp2.size())answer++;
    }
    return answer;
}