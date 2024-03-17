#include <bits/stdc++.h>
using namespace std;

int n,T;
vector<int> bus;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    cin>>n>>T; //n대의 버스 T분에 터미널에 도착
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        int st,nt,cnt;
        cin>>st>>nt>>cnt;
        for(int j=1; j<=cnt; j++){
            if(st>=T){
                bus.push_back(st);
                break;
            }
            st+=nt;
        }
    }
    if(bus.size()==0){
        cout<<-1;
        return 0;
    }
    sort(bus.begin(),bus.end());
    cout<<bus[0]-T;

}