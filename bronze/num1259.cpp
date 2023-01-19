#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string ss;
    while(1){
        cin>>s;
        if(s[0]=='0')
            break;
        ss= s;
        reverse(ss.begin(),ss.end());
        int count =0;
        for(int i=0; i<ss.size(); i++){
            if(s[i]!=ss[i]){count++; break;}
        }
        if(count){
            cout<<"no"<<"\n";
        }else{
            cout<<"yes"<<"\n";
        }
    }

    return 0;
}
