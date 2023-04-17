#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> keymap = {"AA"};
    vector<string> targets = {"B"};
    vector<int> answer;
    map<char,int> mp;
    for(int i=0; i<26; i++){
        mp.insert({65+i,-1});
    }
    for(int i=0; i<keymap.size(); i++){
        int count =0;
        for(int j=0; j<keymap[i].size(); j++){
            count++;
            char a = keymap[i][j];
            if(mp[a]==-1)mp[a]= count;
            else mp[a] = min(mp[a],count);
        }
    }
    for(int i=0;i<targets.size(); i++){
        answer.push_back(0);
        int sum =0;
        for(int j=0; j<targets[i].size(); j++){
            int k =mp[targets[i][j]];
            if(k==-1) {
                sum=-1;
                break;
            }
            else sum+=k;
        }
        answer[i]+=sum;
    }
    for(int i=0; i<answer.size(); i++){
        cout<<answer[i]<<" ";
    }
}
