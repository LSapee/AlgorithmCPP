#include <bits/stdc++.h>
using namespace std;

vector<string> primeNums;
bool nums[10000];
void findPrimeNums(){
    for(int i=2; i*i<10000; i++){
        if(nums[i])continue;
        for(int j=2; i*j<10000; j++){
            nums[i*j]=true;
        }
    }
    for(int i=1000; i<10000; i++){
        if(!nums[i])primeNums.push_back(to_string(i));
    }
}

bool check(string &cur,string target){
    int cnt =0;
    for(int i=0; i<4; i++) if(cur[i]==target[i])cnt++;
    if(cnt==3) return true;
    return false;
}

int findNxtPrime(string &s,string &ss){
    int target = stoi(ss);
    vector<int> vis(10000,-1);
    vis[stoi(s)]=0;
    queue<string> Q;
    Q.push(s);
    while(!Q.empty()){
        string cur = Q.front(); Q.pop();
        int curNum = stoi(cur);
        for(int i=0; i<primeNums.size(); i++){
            int k = stoi(primeNums[i]);
            if(vis[k]!=-1)continue;
            if(!check(cur,primeNums[i]))continue;
            if(k==target)return vis[curNum]+1;
            Q.push(primeNums[i]);
            vis[k]=vis[curNum]+1;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    findPrimeNums();
    int T;cin>>T;
    for(int i=0; i<T; i++){
        string s,ss;cin>>s>>ss;
        if(s[0]==ss[0]&&s[1]==ss[1]&&s[2]==ss[2]&&s[3]==ss[3]){
            cout<<"0\n";
            continue;
        }
        int k =findNxtPrime(s,ss);
        if(k==-1)cout<<"Impossible\n";
        else cout<<k<<"\n";
    }
    return 0;
}