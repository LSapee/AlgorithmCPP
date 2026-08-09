#include <bits/stdc++.h>
using namespace std;

int N,M;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>M;
    vector<int> colors;
    vector<int> nxtColors;
    vector<vector<int>> days(300001);
    unordered_map<int,int> allC;
    for (int i=0; i<N; i++) {
        int c,d,nxtC;cin>>c>>d>>nxtC;
        allC[c]++;
        colors.push_back(c);
        days[d].push_back(i);
        nxtColors.push_back(nxtC);
    }
    for (int i=1; i<=M; i++) {
        int a = days[i].size();
        for (int j=0; j<a; j++) {
            int re = days[i][j];
            allC[colors[re]]--;
            if (allC[colors[re]] == 0)allC.erase(colors[re]);
            colors[re] = nxtColors[re];
            allC[nxtColors[re]]++;
        }
        cout<<allC.size()<<"\n";
    }

    return 0;
}