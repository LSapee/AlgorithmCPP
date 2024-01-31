#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

vector<string> unionStr;
vector<string> sumV;

void makeSumV(vector<string> str1,vector<string> str2){
    bool visStr1[str1.size()-1];
    bool visStr2[str2.size()-1];
    fill(visStr1,visStr1+str1.size(),false);
    fill(visStr2,visStr2+str2.size(),false);
    for(int i=0; i<unionStr.size(); i++){
        for(int j=0; j<str1.size(); j++){
            if(visStr1[j])continue;
            if(unionStr[i].compare(str1[j])==0){
                visStr1[j]= true;
                break;
            }
        }
    }
    for(int i=0; i<unionStr.size(); i++){
        for(int j=0; j<str2.size(); j++){
            if(visStr2[j])continue;
            if(unionStr[i].compare(str2[j])==0){
                visStr2[j]= true;
                break;
            }
        }
    }
    for(int i=0; i<str1.size(); i++){
        if(visStr1[i])continue;
        sumV.push_back(str1[i]);
    }
    for(int i=0; i<str2.size(); i++){
        if(visStr2[i])continue;
        sumV.push_back(str2[i]);
    }
    for(int i=0; i<unionStr.size(); i++) sumV.push_back(unionStr[i]);
}


// 전부 소문자로 만들기
string upper(string s){
    for(int i=0; i<s.size(); i++)if(s[i]>=65&&s[i]<=90)s[i]+=32;
    return s;
}
// 문자열 배열로 만들기
vector<string> makeV(string s){
    vector<string> tmp;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]<97||s[i]>122)continue;
        if(s[i+1]<97||s[i+1]>122)continue;
        tmp.push_back(s.substr(i,2));
    }
    return tmp;
}

int solution(string str1, string str2) {
    int answer = 0;
    str1 = upper(str1);
    str2 = upper(str2);
    vector<string> str1V = makeV(str1);
    vector<string> str2V = makeV(str2);
    bool vis[str2V.size()-1];
    fill(vis,vis+str2V.size(),false);
    for(int i=0; i<str1V.size(); i++){
        for(int j=0; j<str2V.size(); j++){
            if(vis[j])continue;
            if(str1V[i].compare(str2V[j])==0){
                vis[j]= true;
                unionStr.push_back(str2V[j]);
                break;
            }
        }
    }
    makeSumV(str1V,str2V);
    int u = unionStr.size();
    int su = sumV.size();
    cout<<u<<" "<<su;
    if(u==0&&su==0) return 65536;
    double ans = (double)(u)/(su);
    return trunc(ans*65536);
}