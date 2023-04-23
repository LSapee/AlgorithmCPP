#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n =2;
    vector<string> words ={"hello", "one", "even", "never", "now", "world", "draw"};
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(0);
    int t=2;
    map<string,int> mp;
    for(int i=0; i<words.size()-1; i++){
        int a = words[i].size()-1;
        string key = words[i+1];
        if(t>n)t=1;
        if(words[i][a]!= words[i+1][0]) {
            arr[0]=t;
            arr[1]=(i+1)/n+1;
            break;
        }
        if(mp.count(words[i+1])!=0){
            arr[0]=t;
            arr[1]=(i+1)/n+1;
            break;
        }
        mp.insert(make_pair(words[i],-1));
        t++;
    }
// return arr;
    return 0;
}