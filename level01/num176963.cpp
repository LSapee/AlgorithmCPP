#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> name ={"may","kein","kain","radi"};
    vector<int> yearning ={5,10,1,3} ;
    vector<vector<string>> photo = {{"may", "kein", "kain", "radi"},{"may", "kein", "brin", "deny"}, {"kon", "kain", "may", "coni"}};
    vector<int> answer;
    map<string,int> m;
    for(int i=0; i<name.size(); i++){
        m.insert({name[i],yearning[i]});
    }
    for(int i=0; i<photo.size(); i++){
        int score = 0;
        for(int j=0; j<photo[i].size(); j++){
            score += m[photo[i][j]];
        }
        answer.push_back(score);
    }


}
