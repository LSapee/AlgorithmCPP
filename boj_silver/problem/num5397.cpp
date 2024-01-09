#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    for(int z=0;z<n; z++){
        list<char> L;
        string s; cin>>s;
        auto cur = L.begin();
        for(int i=0; i<s.size(); i++){
            char a = s[i];
            if(a=='<'){
                if(cur!=L.begin())cur--;
            }else if(a=='>'){
                if(cur!=L.end())cur++;
            }else if(a=='-'){
                if(cur!=L.begin()){
                    cur--;
                    cur = L.erase(cur);
                }
            }else{
                L.insert(cur,a);
            }
        }
        for(auto i :L){
            if(i!='<'&&i!='>'&&i!='-')cout<<i;
        }
        cout<<"\n";
    }

}