#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while(getline(cin,s)){
        if(s.find("END")!=string::npos){
            break;
        }
        reverse(s.begin(),s.end());
        for(int i=0; i<s.size(); i++){
            cout<<s[i];
        }
        cout<<"\n";
    }
}
