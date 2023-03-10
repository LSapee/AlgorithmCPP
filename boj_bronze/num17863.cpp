#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;

    for(int i=0; i<3; i++){
        if(s[i]!= '5') {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}