#include <bits/stdc++.h>
using namespace std;

int n;
vector<char> arr;

void re(int st,int ed){
    if(ed-st==1)return ;
    int temp  = (ed-st)/3;
    for(int i=st+temp; i<ed-temp; i++) arr[i]=' ';
    re(st,st+temp);
    re(ed-temp,ed);
}

void makeLine(){
    int k=n;
    for(int i=1; i<k; i++) n*=k;
    for(int i=0; i<n; i++)arr.push_back('-');
}

void input() {cin>>n;}

void output(){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    input();
    makeLine();
    re(0,arr.size());
    output();
}