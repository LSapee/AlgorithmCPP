#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s = "0000000000";
    int n;cin>>n;
    string ss;cin>>ss;
    for(int i=0; i<n; i++){
        if(ss[i]=='L'){
            for(int j=0; j<10; j++){
                if(s[j]=='0'){
                    s[j]='1';
                    break;
                }
            }
        }else if(ss[i]=='R'){
            for(int j=9; j>=0; j--){
                if(s[j]=='0'){
                    s[j]='1';
                    break;
                }
            }
        }else{
            s[ss[i]-'0']='0';
        }
    }
    cout<<s;
    return 0;
}