#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> cards1={"i","water", "drink" };
    vector<string> cards2 ={"want", "to"};
    vector<string> goal={"i", "want", "to", "drink", "water"};

    string answer = "Yes";
    queue<string> Q1;
    queue<string> Q2;
    queue<string> Q3;

    for(int i=0; i<cards1.size(); i++){
        Q1.push(cards1[i]);
    }
    for(int i=0; i<cards2.size(); i++){
        Q2.push(cards2[i]);
    }
    for(int i=0; i<goal.size(); i++){
        Q3.push(goal[i]);
    }

    for(int i=0; i<goal.size(); i++){
        string s;
        if(!Q1.empty()){
            s = Q1.front();
            if(goal[i].compare(s)==0){
                Q1.pop();
                Q3.pop();
                continue;
            }
        }
        if(!Q2.empty()){
            s = Q2.front();
            if(goal[i].compare(s)==0){
                Q2.pop();
                Q3.pop();
                continue;
            }
        }
    }
    if(Q3.size())answer="No";
}