//
// Created on 2022/11/29.
//

#include <iostream>
#include <queue>
using namespace std;

int main(){

    int target,end,count,number;
    count =0;
    queue<int> que;
    cin>>end;
    cin>>target;
    cout<<"<";
    for(int i=1; i<=end; i++){
        que.push(i);
    }
    while(!que.empty()){
        count++;
        number = que.front();
        que.pop();
        if(count <target){
            que.push(number);
        }else{
            if(que.empty()){
                cout<<number<<">";
            }else{
                cout<<number<<", ";
            }
            count=0;
        }
    }

    return 0;
}