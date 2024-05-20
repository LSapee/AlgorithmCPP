#include <bits/stdc++.h>
using namespace std;

int n,h,w;
vector<string> arr;

char mia(int st){
    char ans = '?';
    for(int i=0; i<h;i++){
        for(int j=st; j<st+w; j++){
            if(arr[i][j]!='?') return arr[i][j];
        }
    }
    return ans;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>h>>w;
    for(int i=0;i<h; i++){
        string s; cin>>s;
        arr.push_back(s);
    }
    string ansWord = "";
    for(int i=0; i<n*w; i+=w){
        ansWord+= mia(i);
    }
    cout<<ansWord;
}