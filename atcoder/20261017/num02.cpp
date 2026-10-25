#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,M;cin>>N>>M;
    vector<int> arr(N,0);
    unordered_map<string,int> mp;
    for (int i=0; i<N; i++) {
        string s;cin>>s;
        mp[s]= i;
    }
    for (int i=0; i<M; i++) {
        string s;cin>>s;
        if (mp.find(s)!=mp.end()) {
            arr[mp[s]]++;
            continue;
        }
        int cnt = -1;
        int index = -1;
        for (auto a: mp) {
            string temp = a.first;
            if (temp.size() != s.size())continue;
            int count =0;
            for (int j=0; j<s.size(); j++) {
                if (s[j]!=temp[j])count++;
                if (count>1)continue;
            }
            if (count ==1) {
                if (cnt == -1) {
                    cnt= 1;
                    index= mp[temp];
                }else {
                    cnt++;
                }
            }
        }
        if (cnt==1)arr[index]++;
    }
    for (int i=0; i<N; i++)cout<<arr[i]<<"\n";

    return 0;
    

}