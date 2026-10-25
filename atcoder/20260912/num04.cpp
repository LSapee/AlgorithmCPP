#include <bits/stdc++.h>
using namespace std;

// // 0인게 소수
vector<bool> primeNums;
int ans = -1;
vector<bool> vis;
void prime(int N) {
    int a = 1;
    for (int i = 0; i < N; i++)a *= 10;
    primeNums.resize(a,0);
    primeNums[0] = 1;
    primeNums[1] =1;
    for (int i=2; i*i<=a; i++) {
        for (int j=2; j*i<=a; j++) {
            primeNums[i*j] = 1;
        }
    }
}

void back(string &s,int index, unordered_map<char,int> &mp, int target) {
     if (ans!=-1)return ;
     if (index == s.size()) {
         if (!primeNums[target])ans = target;
         return ;
     }
    char cur = s[index];
    if (mp.find(cur) != mp.end()) {
        back(s, index + 1,mp,target * 10 + mp[cur]);
        return;
    }
     for (int i=0; i<10; i++) {
         if (vis[i])continue;
         if (index == 0 && i == 0) continue;
         vis[i] =true;
         mp[cur] = i;
         back(s,index+1,mp, target*10+i);
         vis[i] = false;
         mp.erase(cur);
     }
}


int main() {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

     string s; cin>>s;
     int N = s.size();
     prime(N);
     vis.resize(10);
     unordered_map<char,int> mp;
     back(s,0,mp,0);
     cout<<ans;
     return 0;
}