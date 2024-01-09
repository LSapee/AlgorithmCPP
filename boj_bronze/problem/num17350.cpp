#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        if(s.size()!=3)continue;
        if(s[0]=='a'&&s[1]=='n'&&s[2]=='j'){cout<<"뭐야;"; return 0;}
    }
    cout<<"뭐야?";
}