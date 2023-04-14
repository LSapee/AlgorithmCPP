#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> players = {"mumu", "soe", "poe", "kai", "mine"};
    vector<string> callings ={"kai", "kai", "mine", "mine"};
    vector<string> answer;
    map<string,int> p;
    map<int,string> rank;
    for(int i=0; i<players.size(); i++){
        p.insert({players[i],i+1});
        rank.insert({i+1,players[i]});
    }

    for(int i=0; i<callings.size(); i++){
        string p1 = callings[i];
        int r = p[p1];
        string p2 = rank[r-1];
        int r2 = p[p2];
        p[p1] = r2;
        rank[r-1] = p1;
        p[p2] = r;
        rank[r] = p2;
    }
    for(int i=0; i<players.size(); i++){
        answer.push_back(rank[i+1]);
    }
}