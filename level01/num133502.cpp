#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ingredient ={2, 1, 1, 2, 3, 1, 2, 3, 1};
    queue<int> que;
    stack<int> stack;
    string s ="";
    int num =0;
    bool a = false;

    int count =0;
    for(int i=0; i<ingredient.size();i++){
        if(a){

        }
        if(ingredient[i]==1){
            if(ingredient[i+1] ==1){
                que.push(ingredient[i]);
            }else if(ingredient[i+1]==2){
                s += to_string(ingredient[i]);
                a = true;
            }else{
                a =false;
            }
        }
    }

    while(!que.empty()){
        num = que.front();
        que.pop();
        if(num ==1){
            a = true;
        }
        if(a){
            stack.push(num);
        }
    }

    return 0;
}