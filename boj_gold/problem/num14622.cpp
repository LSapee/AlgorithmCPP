#include <bits/stdc++.h>
#define MAX 5000001
using namespace std;

bool primeNums[MAX];
unordered_set<int> primeNumsU;

void makePrimeNums(){
    primeNums[1]=true;
    for(int i=2; i*i<MAX; i++){
        if(primeNums[i])continue;
        for(int j=2; j*i<MAX; j++){
            primeNums[i*j]=true;
        }
    }
}

void sumPoint(priority_queue<int> pq, long long &user){
    int temp =2;
    while(temp--){
        pq.pop();
    }
    user+=pq.top();
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    makePrimeNums();

    long long G=0,D=0;
    priority_queue<int> Q1;// 대웅
    priority_queue<int> Q2;// 규성
    while(T--){
        int a,b;cin>>a>>b;
        if(!primeNums[a]){
            if(primeNumsU.find(a)==primeNumsU.end()){
                Q1.push(a);
                primeNumsU.insert(a);
            }else{
                // 소수이지만 이미 말했던수
                D-=1000;
            }
        }else{
            // 소수가 아닌 수를 말한경우
            if(Q2.size()<3)G+=1000;
            else{
                sumPoint(Q2,G);
            }
        }
        if(!primeNums[b]){
            if(primeNumsU.find(b)==primeNumsU.end()){
                Q2.push(b);
                primeNumsU.insert(b);
            }else{
                // 소수이지만 이미 말했던수
                G-=1000;
            }
        }else{
            // 소수가 아닌 수를 말한경우
            if(Q1.size()<3)D+=1000;
            else{
                sumPoint(Q1,D);
            }
        }
    }
    if(D>G)cout<<"소수의 신 갓대웅";
    if(G>D)cout<<"소수 마스터 갓규성";
    if(D==G)cout<<"우열을 가릴 수 없음";
    return 0;
}