#include <bits/stdc++.h>
using namespace std;

vector<bool> visited(4000001,false);
vector<int> blueCards;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,M,K;cin>>N>>M>>K;
    for(int i=0; i<M; i++){
        int a;cin>>a;
        blueCards.push_back(a);
    }
    sort(blueCards.begin(),blueCards.end());
    for(int i=0; i<K; i++){
        int a;cin>>a;
        auto it = lower_bound(blueCards.begin(),blueCards.end(),a);
        int temp = it-blueCards.begin();
        while(a==blueCards[temp] || visited[temp])temp++;
        visited[temp] = true;
        cout<<blueCards[temp]<<"\n";
    }
    return 0;
}