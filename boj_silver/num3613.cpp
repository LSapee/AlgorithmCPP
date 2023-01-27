#include <bits/stdc++.h>
#include <cctype>
#include <ctype.h>
using namespace std;

int main(){

    string s,ss;
    cin>>s;
//    첫글자 소문자 아닐때
//    _연속으로 2개 나올때
//    마지막에 언더바 오면
    if(s[0]<97 || s.find("__")!=string::npos || s[s.size()-1] == 95){
        ss = "Error!";
    }else if(s.find("_")!=string::npos){
//        c>java
        for(int i=0; i<s.size(); i++){
//            java 형식 있으면 에러
            if(s[i]<91){
                ss = "Error!";
                break;
            }
            if(s[i]==95){
                if(s[i+1]<91){
                    ss = "Error!";
                    break;
                }
                ss+= toupper(s[i+1]);
                i++;
            }else{
                ss+= s[i];
            }
        }
    }else if(s.find("_")==string::npos){
        for(int i=0; i<s.size(); i++){
            if(s[i]<97){
                ss+='_';
                ss+=tolower(s[i]);
            }else{
                ss+= s[i];
            }
        }
    }else{
        ss ="Error!";
    }

    cout<<ss;
    return 0;
}