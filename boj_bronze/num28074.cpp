#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool arr[5];

    string s;cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='M') arr[0] =true;
        else if(s[i]== 'O') arr[1]=true;
        else if(s[i]=='B') arr[2]=true;
        else if(s[i]=='I') arr[3]=true;
        else if(s[i]=='S')arr[4]=true;
    }
    for(int i=0; i<5; i++){
        if(!arr[i]) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}