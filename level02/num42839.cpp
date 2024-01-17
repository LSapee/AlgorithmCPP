#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

bool ok[7];
int cnt =0;
vector<int> arr;
set<int> st;
vector<bool> vis;
bool isPrime(int n){
    if(n==0||n==1)return true;
    for(int i=2; i<n; i++) if(n%i==0)return true;
    return false;
}

void primeNumber(int n){
    if(!isPrime(n)) st.insert(n);
    n*=10;
    for(int i=0; i<arr.size(); i++){
        if(vis[i])continue;
        vis[i] =true;
        primeNumber(n+arr[i]);
        vis[i] = false;
    }
}


int solution(string numbers) {
    int answer = 0;

    for(int i=0; i<numbers.size(); i++)arr.push_back(numbers[i]-'0');
    for(int i=0; i<arr.size(); i++)vis.push_back(false);
    primeNumber(0);
    answer = st.size();
    return answer;
}