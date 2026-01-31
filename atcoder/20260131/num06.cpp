#include <bits/stdc++.h>
using namespace std;

int N;

void input(){
    cin>>N;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    if(N<10)cout<<N;
    else if(N%10 == 0)cout<<-1;
    else{

    }
    return 0;
}