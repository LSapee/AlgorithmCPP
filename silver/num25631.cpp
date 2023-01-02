#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b,count=0;
    cin>>n;
    vector<int> arr;
    queue<int> que;
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.rbegin(),arr.rend());
    for(int i=0; i<n; i++){
        que.push(arr[i]);
    }
    que.push(0);
    a = que.front();
    que.pop();
    while(!que.empty()){
        b= que.front();
        que.pop();
        if(a<=b){
            que.push(b);
        }else{
            a=b;
        }
        if(b==0){
            if(que.empty()){
                count++;
                break;
            }
            count++;
            que.push(0);
            a= que.front();
            que.pop();
        }
    }
    cout<<count;


    return 0;
}