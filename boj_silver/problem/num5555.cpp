#include <bits/stdc++.h>
using namespace std;

string s;
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s>>n;
    int cnt =0;
    while(n--){
        string ring; cin>>ring;
        for(int i=0; i<ring.size(); i++){
            bool ok = true;
            if(ring[i]==s[0]){
                for(int j=0; j<s.size(); j++){
                    int x = i+j;
                    if(x>=ring.size())x-=ring.size();
                    if(ring[x]!=s[j]){ok=false; break;}
                }
                if(ok){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt;
}